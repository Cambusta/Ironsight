class CfgPatches
{
    class DNCT_Ironsight_Module
    {
        addonRootClass="DNCT_Ironsight";
        units[] = {"DNCT_Ironsight_RequireModule"};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Modules_F"};
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class AttributesBase
        {
            class Default;
            class ModuleDescription; 
        };

        class ModuleDescription
        {
        };
    };
    
    class DNCT_Ironsight_RequireModule: Module_F
    {
        scope = 2; 
        displayName = "Ironsight - Require Addon";
        icon = "\dnct_ironsight\resources\logo_small_transparent.paa";
        category = "NO_CATEGORY";

        class Attributes: AttributesBase
        {
            class ModuleDescription: ModuleDescription{};
        }

        class ModuleDescription: ModuleDescription
        {
            description = "Place this module in your mission to require all players to have Ironsight loaded. The mission will be unplayable without it.";
        };
    };
};
