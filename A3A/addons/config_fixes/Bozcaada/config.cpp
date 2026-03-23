//Bozcaada - config.cpp

#include "..\script_component.hpp"


class CfgPatches 
{
    class PATCHNAME(bozcaada) 
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F_AoW_Loadorder","bozcaada"};
        skipWhenMissingDependencies = 1;
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class CfgWorlds {
    class CAWorld;
    class bozcaada : CAWorld {
        class Names {
            class a3a_Tekirbahce {
                angle = 0;
                name = "Tekirbahçe Bay Hotel";
                position[] = {14517.5,9573.91};
                radiusA = 200;
                radiusB = 200;
                type = "NameVillage";
            };
            class a3a_North {
                angle = 0;
                name = "Merkez North";
                position[] = {14099.2,12324.7};
                radiusA = 150;
                radiusB = 150;
                type = "NameVillage";

            };
            class a3a_South {
                angle = 0;
                name = "Merkez South";
                position[] = {14333.1,11919.3};
                radiusA = 150;
                radiusB = 150;
                type = "NameVillage";
            };
            class a3a_Outskirts {
                angle = 0;
                name = "Merkez Outskirts";
                position[] = {13458.7,11902.5};
                radiusA = 150;
                radiusB = 150;
                type = "NameVillage";
            };
            class a3a_vineyards {
                angle = 0;
                name = "Vineyards";
                position[] = {11259.6,10928.8};
                radiusA = 150;
                radiusB = 150;
                type = "NameVillage";
            };
            class a3a_Sulubahce {
                angle = 0;
                name = "Sulubahçe";
                position[] = {8917.74,10258.7};
                radiusA = 150;
                radiusB = 150;
                type = "NameVillage";
            };
    };
};
};