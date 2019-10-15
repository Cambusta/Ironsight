#include "..\defines.cpp"

class CfgPatches
{
    class DNCT_Ironsight_Optics
    {
        addonRootClass="DNCT_Ironsight";
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3_Weapons_F",
            "A3_Weapons_F_Items",
            "A3_Weapons_F_Acc"
        };
    };
};

class CfgWeapons
{
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class NCTALKEP;
    class Snip;

    class optic_Arco: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ARCO2collimator
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Hamr: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Hamr2Collimator
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Aco: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_ACO_grn: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Aco_smg: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_ACO_grn_smg: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Holosight: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Holosight_smg: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_SOS: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_MRCO: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class MRCOcq
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Nightstalker: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron: NCTALKEP
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_DMS: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron: Snip
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Yorris: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_MRD: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_AMS_base: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_KHS_base: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_ico_01_base_f: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Hamr2Collimator
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Aco: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_ACO_grn: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Aco_smg: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_ACO_grn_smg: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Holosight: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Holosight_smg: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_Yorris: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };

    class optic_MRD: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM;
                    opticsZoomMax=MAXZOOM;
                    opticsZoomInit=INITZOOM;
                };
            };
        };
    };
};
