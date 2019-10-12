/*
	Generates a list of CfgWeapons entires containing only ironsight modes of CUP
	scopes. Used to populate cup_optics/config.cpp file.
*/

dnct_f_cup_buildOpticsConfigFile = {

	hint "Building...";

	_scopeConfigs = [];
	_opticModeParents = [];

	_multimodeScopes = call dnct_f_cup_getOpticConfigsMultimode;
	_scopeConfigs = _scopeConfigs + _multimodeScopes;

	_variableScopes = call dnct_f_cup_getOpticsConfigsSinglemodeVariable;
	_scopeConfigs = _scopeConfigs + _variableScopes;

	_scopesConfigsString = "";

	{
		_config = [_x, _opticModeParents, true] call dnct_f_cup_buildScopeIronsightConfigEntry;
		_scopesConfigsString = _scopesConfigsString + _config + endl;
	} forEach _scopeConfigs;

	_opticsModeParentsConfigString = [_opticModeParents] call dnct_f_cup_buildOpticsModesParentsDeclarations;

	_configString = _opticsModeParentsConfigString + endl + endl + _scopesConfigsString;

	copyToClipboard _configString;

	hint format["Optics config file has been built for %1 scopes.", count _scopeConfigs];
};

dnct_f_cup_buildScopeIronsightConfigEntry = {

	_scopeConfig = param[0];
	_opticsModeParents = param[1];
	_zoomValuesMacro = param[2, false];
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
			
			_opticsZoomMin = getNumber (_opticsMode >> "opticsZoomMin");
			_opticsZoomMax = getNumber (_opticsMode >> "opticsZoomMax");
			_opticsZoomInit = getNumber (_opticsMode >> "opticsZoomInit");
			
			if (_zoomValuesMacro) then
			{
				_opticsZoomMin = "MINZOOM";
				_opticsZoomMax = "MAXZOOM";
				_opticsZoomInit = "INITZOOM";
			};

			// In CUP, ironsight mode is inherited from other optical modes, so if an optical mode has no parents and it isn't
			// the only available mode, skip it as it itsn't an ironsight mode. At the same time we shouldn't skip scopes that
			// have a single optics mode as those have variable zoom (we got them from dnct_f_cup_getOpticsConfigsSinglemodeVariable)
			if ((_opticsModeParentClassName != "" && _opticsModeCount > 1) || _opticsModeCount == 1) then
			{
				if (_opticsModeParentClassName != "") then
				{
					_opticsModeParents pushBackUnique _opticsModeParentClassName;
					_scopeString = _scopeString + format["%1%1%1class %2: %3%4", _tab, _opticsModeClassname, _opticsModeParentClassName, endl];
				}
				else
				{
					_scopeString = _scopeString + format["%1%1%1class %2%3", _tab, _opticsModeClassname, endl];
				};

				_scopeString = _scopeString + format["%1%1%1{%2", _tab, endl];
				_scopeString = _scopeString + format["%1%1%1%1opticsZoomMin=%2%3", _tab, _opticsZoomMin, endl];
				_scopeString = _scopeString + format["%1%1%1%1opticsZoomMax=%2%3", _tab, _opticsZoomMax, endl];
				_scopeString = _scopeString + format["%1%1%1%1opticsZoomInit=%2%3", _tab, _opticsZoomInit, endl];
				_scopeString = _scopeString + format["%1%1%1};%2", _tab, endl];
			};
		};
		
		_scopeString = _scopeString + format["%1%1};%2", _tab, endl];
		_scopeString = _scopeString + format["%1};%2", _tab, endl];
		_scopeString = _scopeString + format["};%2", _tab, endl];
	};

	_scopeString
};

dnct_f_cup_buildOpticsModesParentsDeclarations = {
	_opticsModesParents = param[0];
	_declarations = "";

	{
		_class = format["class %1;%2", _x, endl];
		_declarations = _declarations + _class + endl;
	} forEach _opticsModesParents;

	_declarations
};

dnct_f_cup_getOpticConfigsMultimode = {

	_cupScopeConfigs = call dnct_f_cup_getCUPScopeConfigs;
	_cupScopeConfigsMultimode = [];

	{
		_opticsModeCount = count (_x >> "ItemInfo" >> "OpticsModes");

		if (_opticsModeCount > 1) then
		{
			_cupScopeConfigsMultimode pushBack _x;
		};
		
	} forEach _cupScopeConfigs;

	_cupScopeConfigsMultimode
};

dnct_f_cup_getOpticsConfigsSinglemodeVariable = {

	_cupScopeConfigs = call dnct_f_cup_getCUPScopeConfigs;
	_cupScopeConfigsVariable = [];

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
				_cupScopeConfigsVariable pushBack _x;
			};
		};
		
	} forEach _cupScopeConfigs;

	_cupScopeConfigsVariable
};

dnct_f_cup_getCUPScopeConfigs = {

	_itemConfigs = "inheritsFrom _x == (configFile >> 'CfgWeapons' >> 'ItemCore')" configClasses (configFile >> "CfgWeapons");

	_cupScopeConfigs = [];

	{
		_className = configName _x;

		if (_className find "CUP_optic" != -1) then 
		{
			_cupScopeConfigs pushBack _x;
		};
				
	} forEach _itemConfigs;

	_cupScopeConfigs
};