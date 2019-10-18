#include "..\macro.hpp"

/* ----------------------------------------------------------------------------
Function: dnct_ironsight_fnc_handleAimdown

Description:
	Affects player while in aimdown view. Executed from EachFrame handler.

Parameters:
	none

Returns:
	none

Examples:
    (begin example)
		[] call dnct_ironsight_fnc_handleAimdown
    (end)

Author:
	10Dozen
---------------------------------------------------------------------------- */

if (!alive player || lifeState player == "INCAPACITATED") exitWith {};

private _isAimdown = cameraView == "GUNNER";
private _beforeRecoilVar = SVAR(beforeRecoilModified);
private _beforeNVGVar = SVAR(beforeNVGModified);

if (_isAimdown) then {
	/* AIMDOWN */

	// --- Restore recoil coef (remove penalty)
	if (
		GVAR(WeaponControllabilityEffect_Recoil_Enabled) 
		&& { !isNil { player getVariable _beforeRecoilVar} }
	) then {
		player setUnitRecoilCoefficient (player getVariable _beforeRecoilVar);
		player setVariable [_beforeRecoilVar, nil];
	};

	// --- Turn off NVG when aiming (executes each frame, as player can try to use nvg again)
	if (
		GVAR(NVGEffect_Enabled) 
		&& {currentVisionMode player > 0}
	) then {
		player setVariable [_beforeNVGVar, true];
		player action ["nvGogglesOff", player];
	};
} else {
	/* HIP FIRE */

	// --- Apply penalty on hip-fire 
	if (
		GVAR(WeaponControllabilityEffect_Recoil_Enabled) 
		&& { isNil {player getVariable _beforeRecoilVar} }
	) then {
		private _recoil = unitRecoilCoefficient player;
		player setVariable [_beforeRecoilVar, _recoil];
		player setUnitRecoilCoefficient (_recoil * GVAR(WeaponControllabilityEffect_Recoil_Coef));
	};

	// --- Revert NVG state when player stops from aiming 
	if ( 
		GVAR(NVGEffect_Enabled) 
		&& GVAR(NVGEffect_AutoTurnOn_Enabled) 
		&& { !isNil { player getVariable _beforeNVGVar} }
	) then {
		player action ["nvGoggles", player];
		player setVariable [_beforeNVGVar, nil];
	};
};