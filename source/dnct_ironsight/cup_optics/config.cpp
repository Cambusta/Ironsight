#include "..\defines.cpp"

class CfgPatches
{
    class DNCT_Ironsight_Optics_CUP
    {
        addonRootClass="DNCT_Ironsight";
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "cup_weapons_weaponscore",
            "cup_weapons_weaponsdata",
            "cup_weapons_west_attachments",
            "cup_weapons_east_attachments"
        };
    };
};

class CfgWeapons
{
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class PSO;
    class NSPU;
    class Scope;
    class SUSAT;
    class ACOG;
    class MK4CQT;
    class Specter4x;
    class Specter;
    class regular;

    class CUP_optic_PSO_1: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron: PSO
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_PSO_1_open: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron: PSO
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_PSO_1_AK: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron: PSO
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_PSO_1_AK_open: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron: PSO
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_NSPU: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Ironsights: NSPU
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_PechenegScope: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron: Scope
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_PSO_1_1: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron: PSO
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_PSO_1_1_open: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Iron: PSO
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_SUSAT: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: SUSAT
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_SUSAT_3D: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: SUSAT
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ACOG: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: ACOG
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ACOG_3D: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: ACOG
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_RCO: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: ACOG
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ACOG_TA01NSN_Black_3D: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: ACOG
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ACOG_TA01NSN_RMR_Black: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: ACOG
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ACOG_TA01NSN_RMR_Black_3D: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: ACOG
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ACOG_TA01B_Black: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: ACOG
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ACOG_TA01B_Black_3D: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: ACOG
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ACOG_TA01B_RMR_Black: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: ACOG
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ACOG_TA01B_RMR_Black_3D: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: ACOG
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_LeupoldMk4_CQ_T: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: MK4CQT
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ElcanM145: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Ironsights: Scope
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ElcanM145_3D: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Ironsight: Scope
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_Elcan_SpecterDR: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Specter1x: Specter4x
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
                class Ironsights: Specter4x
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_Elcan: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Ironsights: Specter
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_Elcan_3D: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator: Specter
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_HensoldtZO: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
            };
        };
    };

    class CUP_optic_PGO7V: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class iron: regular
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_Kobra: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ekp_8_02: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_1p63: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ACO
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_HoloBlack: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class EoTx
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_CompM2_Black: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class EoTx
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_CompM4: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class EoTx
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_MicroT1: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class EoTx
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_MARS: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class EoTx
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ZDDot: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class ZDDot
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_MRad: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class MRAD
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_TrijiconRx01_desert: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Rx01
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_CWS: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class CWS
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_ZeissZPoint: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class EoTx
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_G33_HWS_BLK_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_G33_HWS_TAN_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_G33_HWS_OD_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_G33_HWS_COYOTE_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_COMPM4_BLK_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_COMPM2_BLK_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_COMPM2_TAN_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_COMPM2_OD_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_MICROT1_BLK_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_MICROT1_TAN_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_MICROT1_OD_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_ZDDOT_BLK_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_MARS_BLK_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_MARS_TAN_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_MARS_OD_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_M68_BLK_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_M68_TAN_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };

    class CUP_optic_AIMM_M68_OD_DWN: ItemCore
    {
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Kolimator
                {
                    opticsZoomMin=MINZOOM
                    opticsZoomMax=MAXZOOM
                    opticsZoomInit=INITZOOM
                };
            };
        };
    };
};