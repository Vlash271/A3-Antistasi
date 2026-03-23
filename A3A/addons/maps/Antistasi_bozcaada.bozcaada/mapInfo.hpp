class bozcaada {
	population[] = { 
	{"merkez_city",537},
	{"a3a_Tekirbahce",27},
	{"a3a_North",498},
	{"a3a_South",366},
	{"a3a_Outskirts",263},
	{"a3a_vineyards",75},
	{"a3a_Sulubahce",121}
	};
	disabledTowns[] = {"merkez_city"}; 
	antennas[] = {
		{12836.6,10356.5,0.0119171},{12837.1,10356.1,0.0289001},
		{12820.8,8506.88,1.52588e-05},{7671.17,12459.7,8.39233e-05},
		{7671.17,12459.7,-0.000488281},{12777.8,12908.4,0.576645},
		{14565.1,11960.3,0.760006}
	};
	antennasBlacklistIndex[] = {1,3,6};
	banks[] = {
		{14120,12003,0}
	};
	garrison[] = {
	};
	fuelStationTypes[] = {
		"Land_FuelStation_Feed_F","Land_fs_feed_F","Land_FuelStation_01_pump_malevil_F","Land_FuelStation_01_pump_F","Land_FuelStation_02_pump_F","Land_FuelStation_03_pump_F"
	};
	climate = "arid";
	buildObjects[] = {
		// Large vanilla arid structures
		{"Land_BagBunker_Large_F", 300}, {"Land_BagBunker_Tower_F", 300}, {"Land_BagBunker_Small_F", 60},
		{"Land_Shed_09_F", 120}, {"Land_Shed_10_F", 140},
		// Vanilla arid sandbag walls
		{"Land_BagFence_Long_F", 10}, {"Land_BagFence_Round_F", 10}, {"Land_BagFence_Short_F", 10},
		// Non-camo vanilla stuff
		{"Land_SandbagBarricade_01_half_F", 20}, {"Land_SlumWall_01_s_2m_F", 5}, {"Land_PillboxBunker_01_hex_F", 200},
		{"Land_Barricade_01_4m_F", 30}, {"Land_GuardBox_01_brown_F", 80}, {"Land_Tyres_F", 10},
		// Helipad
		{"a3a_helipad", 1500, "helipad"}
	};
	policeStationTypes[] = {
		"Land_i_House_Big_01_V1_F", "Land_i_House_Big_01_V2_F", "Land_i_House_Big_01_V3_F",
		"Land_i_House_Big_02_V1_F", "Land_i_House_Big_02_V2_F", "Land_i_House_Big_02_V3_F"
	};
	requiredMods = "Bozcaada";
	size = 20.0;
	cityCount = 4;
	airbaseCount = 2;
};
