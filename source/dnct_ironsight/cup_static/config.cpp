#include "..\defines.cpp"

class CfgPatches
{
    class DNCT_Ironsight_Static_CUP
    {
        addonRootClass="DNCT_Ironsight";
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3_Weapons_F",
            "A3_Static_F"
        };
    };
};

class CfgVehicles
{
    class Land;
    class LandVehicle: Land
    {
        class NewTurret;
    };

    class StaticWeapon: LandVehicle
    {
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class ViewOptics
                {
                    minFov=MINFOV;
                    maxFov=MAXFOV;
                    initFov=INITFOV;
                };
            };
        };
    };
};
