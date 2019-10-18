#include "macro.hpp"

private _add = {
	// See https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System#creating-a-setting for details
	params ["_var","_type","_val",["_exp", "No Expression"],["_subcat", ""],["_isGlobal", true],["_needRestart", false]];	
	 
	private _arr = [
		FORMAT_VAR(_var)   /* Unique setting name. Matches resulting variable name <STRING> */
		, _type            /* Type of setting. */
		, [
			/* Display name or display name + tooltip; Generates from varname in format `STR_ironsight_VarName` and `STR_ironsight_VarName_desc`  */
			localize format["STR_%1_%2",ADDON,_var]
			, localize format ["STR_%1_%2_desc",ADDON,_var]
		] 
		, if (_subcat == "") then { TITLE } else { [TITLE, _subcat] } /* Category for the settings menu + optional sub-category */
		, _val             /* Extra properties of the setting depending of _settingType;*/
		, _isGlobal        /* 0: setting is local; 1 (true): all clients share the same setting; 2: setting can't be overwritten; */
		, nil              /* Script to execute when setting is changed.  */
		, _needRestart     /* Setting will be marked as needing mission restart after being changed */
	];
	
	if !(typename _exp == "STRING" && { _exp == "No Expression" }) then { _arr set [6, _exp]; };
	_arr call CBA_fnc_addSetting;
};

// Addon Settings
[
	"WeaponControllabilityEffect_Recoil_Enabled"
	, "CHECKBOX"
	, true
	, { if (!isNil SVAR(fnc_restartState)) then { [] call GVAR(fnc_restartState); }; } 
	, "Weapon Controllability Effects"
] call _add;

[
	"WeaponControllabilityEffect_Recoil_Coef"
	, "SLIDER"
	, [1, 5, 1.75, 2] /* Min, Max, (Default), #.## format */
	, { if (!isNil SVAR(fnc_restartState)) then { [] call GVAR(fnc_restartState); }; } 
	, "Weapon Controllability Effects"
] call _add;

[
	"NVGEffect_Enabled"
	, "CHECKBOX"
	, false
	, nil 
	, "NVG Effects"
] call _add;

[
	"NVGEffect_AutoTurnOn_Enabled"
	, "CHECKBOX"
	, true
	, nil 
	, "NVG Effects"
] call _add;
