#include "..\macro.hpp"

/* ----------------------------------------------------------------------------
Function: dnct_ironsight_fnc_restartState

Description:
	Resets recoil coef and re-apply new values by forcing camera view change.

Parameters:
	none

Returns:
	none

Examples:
    (begin example)
		[] call dnct_ironsight_fnc_restartState
    (end)

Author:
	10Dozen
---------------------------------------------------------------------------- */

player setUnitRecoilCoefficient 1;

// --- Force switch cam view to apply new values
private _camViewFrom = cameraView;
private _camViewTo = if (_camViewFrom == "GUNNER") then { "INTERNAL" } else { "GUNNER" };

player switchCamera _camViewTo;
[{player switchCamera _this}, _camViewFrom] call CBA_fnc_execNextFrame;