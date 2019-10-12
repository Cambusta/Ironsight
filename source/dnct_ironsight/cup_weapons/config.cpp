#include "..\defines.cpp"

class CfgPatches
{
    class DNCT_Ironsight_Weapons_CUP
    {
        addonRootClass="DNCT_Ironsight";
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3_Data_F",
            "A3_Weapons_F",
            "cup_weapons_aa12",
            "cup_weapons_ak",
            "cup_weapons_ammoboxes",
            "cup_weapons_ammunition",
            "cup_weapons_as50",
            "cup_weapons_awm",
            "cup_weapons_backpacks",
            "cup_weapons_bizon",
            "cup_weapons_bren2",
            "cup_weapons_colt1911",
            "cup_weapons_compact",
            "cup_weapons_compatibility",
            "cup_weapons_curator",
            "cup_weapons_cz750",
            "cup_weapons_cz805",
            "cup_weapons_dmr",
            "cup_weapons_duty",
            "cup_weapons_east_attachments",
            "cup_weapons_evo",
            "cup_weapons_fnfal",
            "cup_weapons_g36",
            "cup_weapons_glock17",
            "cup_weapons_grenadelaunchers",
            "cup_weapons_grenades",
            "cup_weapons_huntingrifle",
            "cup_weapons_igla",
            "cup_weapons_items",
            "cup_weapons_javelin",
            "cup_weapons_ksvk",
            "cup_weapons_l110",
            "cup_weapons_l85",
            "cup_weapons_leeenfield",
            "cup_weapons_m1014",
            "cup_weapons_m107",
            "cup_weapons_m110",
            "cup_weapons_m136",
            "cup_weapons_m14",
            "cup_weapons_m16",
            "cup_weapons_m24",
            "cup_weapons_m240",
            "cup_weapons_m249",
            "cup_weapons_m47",
            "cup_weapons_m60e4",
            "cup_weapons_m9",
            "cup_weapons_maaws",
            "cup_weapons_makarov",
            "cup_weapons_metis_at_13",
            "cup_weapons_microuzi",
            "cup_weapons_mk48",
            "cup_weapons_mp5",
            "cup_weapons_nlaw",
            "cup_weapons_nvg",
            "cup_weapons_pb_6p9",
            "cup_weapons_phantom",
            "cup_weapons_pk",
            "cup_weapons_pods",
            "cup_weapons_put",
            "cup_weapons_revolver",
            "cup_weapons_rpg18",
            "cup_weapons_rpg7",
            "cup_weapons_sa58",
            "cup_weapons_sa61",
            "cup_weapons_saiga12k",
            "cup_weapons_scar",
            "cup_weapons_smaw",
            "cup_weapons_sounds",
            "cup_weapons_stinger",
            "cup_weapons_strela_2",
            "cup_weapons_svd",
            "cup_weapons_uk59",
            "cup_weapons_vss",
            "cup_weapons_weaponscore",
            "cup_weapons_weaponsdata",
            "cup_weapons_xm8"
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
