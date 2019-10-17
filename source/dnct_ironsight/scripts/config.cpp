#include "..\defines.hpp"

class CfgPatches
{
    class DNCT_Ironsight_Scripts
    {
        addonRootClass="DNCT_Ironsight";
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "CBA_MAIN"
        };
    };
};

class Extended_PreInit_EventHandlers
{
    class DNCT_Ironsight_Scripts
    {
        init = call compile preprocessFileLineNumbers "\dnct_ironsight\scripts\Settings.sqf";
    };
};

class Extended_PostInit_EventHandlers
{
    class DNCT_Ironsight_Scripts
    {
        init = call compile preprocessFileLineNumbers "\dnct_ironsight\scripts\Init.sqf";
    };
};