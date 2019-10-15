/*
	Generates a list of CfgWeapons entires containing only ironsight modes of CUP
	scopes. Used to populate cup_optics/config.cpp and a3_optics/config.cpp files.

	To build the config file, run
		Vanilla optics: 	['optic_', '_opticsMemoryPoint == "eye"'] call dnct_f_buildOpticsConfigFile;
		CUP optics:			['CUP_optic_', '(_opticsModeParentClassName != "" && _opticsModeCount > 1) || _opticsModeCount == 1'] call dnct_f_buildOpticsConfigFile;
*/

dnct_f_buildOpticsConfigFile = {

	hint "Building...";

	_prefix = param[0];
	_filter = param[1];

	_scopeConfigs = [];
	_parentDeclarations = [];

	_multimodeScopes = [_prefix] call dnct_f_getOpticConfigsMultimode;
	_scopeConfigs = _scopeConfigs + _multimodeScopes;

	_variableScopes = [_prefix] call dnct_f_getOpticsConfigsSingleModeVariable;
	_scopeConfigs = _scopeConfigs + _variableScopes;

	_scopesConfigsString = "";

	{
		_config = [_x, _parentDeclarations, _filter, true] call dnct_f_buildScopeIronsightConfigEntry;
		_scopesConfigsString = _scopesConfigsString + _config + endl;
	} forEach _scopeConfigs;

	_declarationsString = [_parentDeclarations] call dnct_f_buildDeclarationsSections;

	_configString = _declarationsString + endl + endl + _scopesConfigsString;

	copyToClipboard _configString;

	hint format["Optics config file has been built for %1 scopes with prefix %2. Result copied to clipboard.", count _scopeConfigs, _prefix];
};

dnct_f_buildScopeIronsightConfigEntry = {

	_scopeConfig = param[0];
	_parentDeclarations = param[1];
	_filteringConditionString = param[2];
	_zoomValuesMacro = param[3, false];
	_tab = "    ";
	_scopeString = "";

	_opticsModeCount = count (_scopeConfig >> "ItemInfo" >> "OpticsModes");

	if (_opticsModeCount > 0) then
	{
		_class = configName _scopeConfig;
		_parentClass = configName (inheritsFrom _scopeConfig);

		_scopeString = format["class %1: %2%3", _class, _parentClass, endl];
		_scopeString = _scopeString + "{" + endl;
		_scopeString = _scopeString + format["%1class ItemInfo: InventoryOpticsItem_Base_F%2", _tab, endl];
		_scopeString = _scopeString + format["%1{%2", _tab, endl];
		_scopeString = _scopeString + format["%1%1class OpticsModes%2", _tab, endl];
		_scopeString = _scopeString + format["%1%1{%2", _tab, endl];

		for "_i" from 1 to _opticsModeCount do 
		{
			_modeIndex = _i - 1;
			_opticsMode = (_scopeConfig >> "ItemInfo" >> "OpticsModes") select _modeIndex;
			_opticsModeClassname = configName _opticsMode;
			_opticsModeParentClassName = configName (inheritsFrom _opticsMode);
			_opticsMemoryPoint = getText (_opticsMode >> "memoryPointCamera");
			
			_opticsZoomMin = getNumber (_opticsMode >> "opticsZoomMin");
			_opticsZoomMax = getNumber (_opticsMode >> "opticsZoomMax");
			_opticsZoomInit = getNumber (_opticsMode >> "opticsZoomInit");
			
			if (_zoomValuesMacro) then
			{
				_opticsZoomMin = "MINZOOM";
				_opticsZoomMax = "MAXZOOM";
				_opticsZoomInit = "INITZOOM";
			};

			if (call compile _filteringConditionString) then
			{
				if (_opticsModeParentClassName != "") then
				{
					_parentDeclarations pushBackUnique _opticsModeParentClassName;
					_scopeString = _scopeString + format["%1%1%1class %2: %3%4", _tab, _opticsModeClassname, _opticsModeParentClassName, endl];
				}
				else
				{
					_scopeString = _scopeString + format["%1%1%1class %2%3", _tab, _opticsModeClassname, endl];
				};

				_scopeString = _scopeString + format["%1%1%1{%2", _tab, endl];
				_scopeString = _scopeString + format["%1%1%1%1opticsZoomMin=%2%3;", _tab, _opticsZoomMin, endl];
				_scopeString = _scopeString + format["%1%1%1%1opticsZoomMax=%2%3;", _tab, _opticsZoomMax, endl];
				_scopeString = _scopeString + format["%1%1%1%1opticsZoomInit=%2%3;", _tab, _opticsZoomInit, endl];
				_scopeString = _scopeString + format["%1%1%1};%2", _tab, endl];
			};
		};
		
		_scopeString = _scopeString + format["%1%1};%2", _tab, endl];
		_scopeString = _scopeString + format["%1};%2", _tab, endl];
		_scopeString = _scopeString + format["};%2", _tab, endl];
	};

	_scopeString
};

dnct_f_buildDeclarationsSections = {
	_opticsModesParents = param[0];

	_declarations = "class ItemCore;" + endl;
	_declarations = "class InventoryOpticsItem_Base_F;" + endl;

	{
		_class = format["class %1;%2", _x, endl];
		_declarations = _declarations + _class;
	} forEach _opticsModesParents;

	_declarations
};

dnct_f_getOpticConfigsMultimode = {

	_prefix = param[0];

	_scopeConfigs = [_prefix] call dnct_f_getScopeConfigs;
	_scopeConfigsMultimode = [];

	{
		_opticsModeCount = count (_x >> "ItemInfo" >> "OpticsModes");

		if (_opticsModeCount > 1) then
		{
			_scopeConfigsMultimode pushBack _x;
		};
		
	} forEach _scopeConfigs;

	_scopeConfigsMultimode
};

dnct_f_getOpticsConfigsSingleModeVariable = {

	_prefix = param[0];

	_scopeConfigs = [_prefix] call dnct_f_getScopeConfigs;
	_scopeConfigsVariable = [];

	{
		_opticsModeCount = count (_x >> "ItemInfo" >> "OpticsModes");

		if (_opticsModeCount == 1) then
		{
			_opticsMode = (_x >> "ItemInfo" >> "OpticsModes") select 0;
			
			_opticsZoomMin = getNumber (_opticsMode >> "opticsZoomMin");
			_opticsZoomMax = getNumber (_opticsMode >> "opticsZoomMax");
			_opticsZoomInit = getNumber (_opticsMode >> "opticsZoomInit");

			if (_opticsZoomInit != _opticsZoomMax) then
			{
				_scopeConfigsVariable pushBack _x;
			};
		};
		
	} forEach _scopeConfigs;

	_scopeConfigsVariable
};

dnct_f_getScopeConfigs = {

	_prefix = param[0];

	_itemConfigs = "inheritsFrom _x == (configFile >> 'CfgWeapons' >> 'ItemCore')" configClasses (configFile >> "CfgWeapons");

	_scopeConfigs = [];

	{
		_className = configName _x;

		if (_className find _prefix == 0) then 
		{
			_scopeConfigs pushBack _x;
		};
				
	} forEach _itemConfigs;

	_scopeConfigs
};