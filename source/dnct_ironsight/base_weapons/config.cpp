#include "..\defines.hpp"

class CfgPatches
{
    class DNCT_Ironsight_Weapons
    {
        addonRootClass="DNCT_Ironsight";
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3_Data_F",
            "A3_Weapons_F"
        };
    };
};

class CfgWeapons
{
    class Default;

    class LauncherCore;
    class Launcher: LauncherCore
    {
        opticsZoomMin=MINZOOM;
        opticsZoomMax=MAXZOOM;
        opticsZoomMax=INITZOOM;
    };

    class GrenadeLauncher: Default
    {
        opticsZoomMin=MINZOOM;
        opticsZoomMax=MAXZOOM;
        opticsZoomMax=INITZOOM;
    };

    class UGL_F: GrenadeLauncher
    {
        opticsZoomMin=MINZOOM;
        opticsZoomMax=MAXZOOM;
        opticsZoomMax=INITZOOM;
    };

    class RifleCore;
    class Rifle: RifleCore
    {
        opticsZoomMin=MINZOOM;
        opticsZoomMax=MAXZOOM;
        opticsZoomMax=INITZOOM;
    };

    class PistolCore;
    class Pistol: PistolCore
    {
        opticsZoomMin=MINZOOM;
        opticsZoomMax=MAXZOOM;
        opticsZoomMax=INITZOOM;
    };

    class Pistol_Base_F: Pistol
    {
        opticsZoomMin=MINZOOM;
        opticsZoomMax=MAXZOOM;
        opticsZoomMax=INITZOOM;
    };

    class Put: Default
    {
        class PutMuzzle: Default
        {
            opticsZoomMin=MINZOOM;
            opticsZoomMax=MAXZOOM;
            opticsZoomMax=INITZOOM;
        };
    };
};
