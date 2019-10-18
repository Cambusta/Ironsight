#include "macro.hpp"

// Exit at dedicated or headless client
if (!hasInterface) exitWith {};

// Functions
COMPILE_FUNCTION(fnc_handleAimdown);
COMPILE_FUNCTION(fnc_restartState);

// Initialize
GVAR(PFH) = [GVAR(fnc_handleAimdown)] call CBA_fnc_addPerFrameHandler;