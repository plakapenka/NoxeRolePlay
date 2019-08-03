#define MAX_BOAT_MATERIALS 3000
#define MAX_MATERIALS_GET  150

enum
{
	E_MATERIALS_EMPTY,
	E_MATERIALS_LOADING,
	E_MATERIALS_UNLOADING
}

new g_szGangBoats[5];
enum E_GANG_BOATS_DATA
{
	e_iMaterials, 
	e_bLoading,
	e_iPickup
};
new g_szGangBoatStat[MAX_VEHICLES][E_GANG_BOATS_DATA]; // lol


stock vehiclesInitLSa()
{
	g_szGangBoats[0] = CreateVehicle_R(595,2983.7717,-1502.3929,0.3596,349.8354, 12, 12, -1); 	// rifa 
	g_szGangBoatStat[g_szGangBoats[0]][e_iMaterials] = 0;
	g_szGangBoatStat[g_szGangBoats[0]][e_bLoading] = E_MATERIALS_EMPTY;
	g_szGangBoats[1] = CreateVehicle_R(595,2978.7061,-1500.8059,0.3941,343.4348, 2, 2, -1); 	// aztec
	g_szGangBoatStat[g_szGangBoats[1]][e_iMaterials] = 0;
	g_szGangBoatStat[g_szGangBoats[1]][e_bLoading] = E_MATERIALS_EMPTY;
	g_szGangBoats[2] = CreateVehicle_R(595,2986.1133,-1489.6766,-0.2191,351.8490, 6, 6, -1); 	// vagos
	g_szGangBoatStat[g_szGangBoats[2]][e_iMaterials] = 0;
	g_szGangBoatStat[g_szGangBoats[2]][e_bLoading] = E_MATERIALS_EMPTY;
	g_szGangBoats[3] = CreateVehicle_R(595,2988.7771,-1475.2854,-0.1215,351.7470, 86, 86, -1); 	// groove
	g_szGangBoatStat[g_szGangBoats[3]][e_iMaterials] = 0;
	g_szGangBoatStat[g_szGangBoats[3]][e_bLoading] = E_MATERIALS_EMPTY;
	g_szGangBoats[4] = CreateVehicle_R(595,2983.3174,-1474.8318,-0.0756,348.7393, 85, 85, -1); 	// ballas
	g_szGangBoatStat[g_szGangBoats[4]][e_iMaterials] = 0;
	g_szGangBoatStat[g_szGangBoats[4]][e_bLoading] = E_MATERIALS_EMPTY;
}


stock mapInitLSa()
{
	new tmpobjid;
	tmpobjid = CreateDynamicObjectEx(3406, 2963.093017, -1487.835449, -1.446422, 0.000000, 0.000000, -10.400002, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2971.750244, -1489.424804, -1.446422, 0.000000, 0.000000, -10.400002, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2971.388427, -1491.391235, -1.446422, 0.000000, 0.000000, -10.400002, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2962.732910, -1489.803833, -1.446422, 0.000000, 0.000000, -10.400002, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2963.450683, -1485.888183, -1.446422, 0.000000, 0.000000, -10.400002, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2972.088134, -1487.473510, -1.446422, 0.000000, 0.000000, -10.400002, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2980.733398, -1489.059204, -1.446422, 0.000000, 0.000000, -10.400002, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2980.370849, -1491.025390, -1.446422, 0.000000, 0.000000, -10.400002, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2980.014648, -1492.973510, -1.446422, 0.000000, 0.000000, -10.400002, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2982.575683, -1494.868164, -1.446422, 0.000000, 0.000000, 79.599998, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2980.989501, -1503.514648, -1.446422, 0.000000, 0.000000, 79.599998, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2984.616455, -1483.765869, -1.446422, 0.000000, 0.000000, 79.599998, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2986.194824, -1475.170776, -1.446422, 0.000000, 0.000000, 79.599998, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2987.771728, -1466.584838, -1.446422, 0.000000, 0.000000, 79.599998, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	tmpobjid = CreateDynamicObjectEx(3406, 2979.417236, -1512.094604, -1.446422, 0.000000, 0.000000, 79.599998, 300.00, 300.00); 
	SetDynamicObjectMaterial(tmpobjid, 1, 19962, "samproadsigns", "materialtext1", 0x00000000);
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	tmpobjid = CreateDynamicObjectEx(1428, 2952.203613, -1487.334838, 2.044466, 0.000000, 0.000000, 90.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1271, 2953.015625, -1486.665405, 0.934229, 0.000000, 0.000000, 0.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1271, 2953.015625, -1485.865356, 0.934229, 0.000000, 0.000000, -11.200000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1271, 2952.929687, -1486.296875, 1.614229, 0.000000, 0.000000, -11.200000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1362, 2956.346435, -1489.168334, 1.212883, 0.000000, 0.000000, 0.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(3066, 2963.211914, -1486.333496, 1.654887, 0.000000, 0.000000, 78.499984, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(3633, 2968.841308, -1486.965087, 1.024395, 0.000000, 0.000000, 0.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(3633, 2970.372558, -1487.245361, 1.024395, 0.000000, 0.000000, 0.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(8873, 2982.545410, -1491.437133, 6.324395, 0.000000, 0.000000, -118.599967, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1431, 2957.455322, -1485.707763, 1.079314, 0.000000, 0.000000, 90.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1368, 2951.549804, -1464.558227, 10.454228, 0.000000, 0.000000, -99.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1368, 2950.182617, -1473.190795, 10.504229, 0.000000, 0.000000, -99.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1368, 2953.285888, -1453.594360, 10.324225, 0.000000, 0.000000, -99.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(970, 2953.817626, -1489.297607, 1.113636, 0.000000, 0.000000, -7.299997, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(970, 2957.885009, -1489.818481, 1.113636, 0.000000, 0.000000, -7.299997, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(970, 2961.927490, -1490.419189, 1.113636, 0.000000, 0.000000, -9.299999, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(970, 2965.987304, -1491.113525, 1.113636, 0.000000, 0.000000, -10.200002, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(970, 2970.062255, -1491.845703, 1.113636, 0.000000, 0.000000, -10.200002, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(970, 2974.117431, -1492.575805, 1.113636, 0.000000, 0.000000, -10.200002, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(970, 2978.193115, -1493.308105, 1.113636, 0.000000, 0.000000, -10.200002, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(970, 2979.153320, -1487.972778, 1.113636, 0.000000, 0.000000, -10.200002, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(970, 2975.097900, -1487.241333, 1.113636, 0.000000, 0.000000, -10.200002, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(970, 2971.052246, -1486.514404, 1.113636, 0.000000, 0.000000, -10.200002, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(2977, 2973.008544, -1487.939819, 0.631702, 0.000000, 0.000000, -9.200001, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(2977, 2974.636718, -1488.203247, 0.631702, 0.000000, 0.000000, -9.200001, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(2977, 2976.324462, -1488.476562, 0.631702, 0.000000, 0.000000, -9.200001, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1328, 2959.324707, -1489.440185, 1.131702, 0.000000, 0.000000, 0.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1369, 2971.699951, -1491.418701, 1.191702, 0.000000, 0.000000, 0.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(1450, 2976.571533, -1492.313354, 1.284395, 0.000000, 0.000000, 180.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(2677, 2980.468261, -1490.823608, 0.921702, 0.000000, 0.000000, 0.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(2677, 2972.748535, -1490.823608, 0.921702, 0.000000, 0.000000, 0.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(2675, 2955.304931, -1487.509155, 0.698011, 0.000000, 0.000000, 0.000000, 300.00, 300.00); 
	tmpobjid = CreateDynamicObjectEx(18688, 2956.218505, -1489.370483, 0.181731, 0.000000, 0.000000, 0.000000, 300.00, 300.00); 

	//==========================SFa============================================
	CreateDynamicObject(10771, 2872.80493, -2434.82202, 6.27850,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(11145, 2872.74878, -2371.97070, 5.05700,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(10770, 2865.28491, -2438.05591, 39.44200,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(11149, 2867.62427, -2428.72021, 12.86300,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(11237, 2865.29297, -2438.08301, 39.28600,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(5153, 2858.34595, -2457.56104, 11.06200,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(5153, 2858.37500, -2455.41895, 11.06200,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(11495, 2845.35107, -2455.25000, 11.86200,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11495, 2823.45093, -2455.25488, 11.86200,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(5152, 2813.13306, -2455.43188, 11.97700,   0.00000, 10.00000, 180.75000);
	CreateDynamicObject(11495, 2824.30908, -2457.06812, 11.86200,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(11495, 2845.34399, -2457.05005, 11.86200,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(5152, 2813.12695, -2456.92700, 11.97700,   0.00000, 9.99756, 180.74707);
	CreateDynamicObject(3798, 2865.02661, -2462.69434, 11.02900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(944, 2874.16602, -2412.40503, 3.86300,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(944, 2876.36304, -2410.97607, 3.86300,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(944, 2875.52588, -2411.59790, 5.30900,   0.00000, 0.00000, 120.00000);
	CreateDynamicObject(923, 2883.50195, -2414.57300, 3.85800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3066, 2883.75610, -2406.46411, 4.03300,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2991, 2879.66699, -2414.43408, 3.60600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2991, 2862.32593, -2404.34790, 3.60600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2991, 2863.34497, -2401.68994, 3.60600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2991, 2861.33789, -2398.56494, 3.60600,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2973, 2861.96802, -2400.94092, 4.23600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2973, 2862.85303, -2403.55103, 4.23600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18260, 2881.64111, -2382.10400, 4.55100,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18257, 2860.61108, -2393.96899, 2.97800,   0.00000, 0.00000, 269.75000);
	CreateDynamicObject(1431, 2884.14795, -2399.76709, 3.52600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 2881.54810, -2407.09912, 3.72800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 2879.06104, -2404.40308, 3.72800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1348, 2884.37891, -2398.75293, 3.68100,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(964, 2881.20996, -2401.65308, 2.97800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3796, 2871.51855, -2456.14917, 11.06900,   0.00000, 0.00000, 50.00000);
	CreateDynamicObject(3795, 2882.84399, -2500.25903, 11.37000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3794, 2878.96094, -2500.91992, 11.62900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3787, 2875.13306, -2496.81592, 11.59500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3797, 2876.57495, -2505.20703, 14.06500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3795, 2879.72998, -2496.44092, 11.37000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3794, 2872.99707, -2501.68506, 11.62900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 2870.04199, -2501.86792, 11.02900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 2876.06812, -2503.70508, 11.02900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 2871.09595, -2459.73486, 11.02900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3622, 2709.36, -2367.78, 15.96,   0.00, 0.00, 0.00);
	CreateDynamicObject(3622, 2681.57, -2358.74, 15.92,   0.00, 0.00, -397.32);
	CreateDynamicObject(0, 2865.15503, -2462.20288, 11.02900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 2882.05591, -2492.21704, 11.02900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18260, 2874.60889, -2436.33203, 12.60200,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1271, 2873.86499, -2428.31201, 11.37900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1431, 2874.47998, -2429.24390, 11.57700,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 2874.71509, -2427.11401, 11.77900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 2876.68237, -2427.65649, 11.77900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 2876.10596, -2427.45410, 13.27900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1723, 2862.36768, -2442.58618, 10.98100,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1723, 2861.17090, -2450.71802, 10.98100,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2297, 2866.31104, -2451.60010, 10.98100,   0.00000, 0.00000, 135.25000);
	CreateDynamicObject(2229, 2866.61011, -2451.87793, 10.97400,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2229, 2864.05396, -2451.90601, 10.97400,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(14651, 2863.40820, -2446.28638, 13.22300,   0.00000, 0.00000, 18000.00000);
	CreateDynamicObject(2708, 2863.69897, -2451.62109, 10.97400,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2399, 2863.59009, -2451.27588, 12.65700,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2398, 2863.03003, -2451.35010, 12.66600,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 2616.07056, -2341.35547, 12.70720,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(987, 2616.08423, -2330.24829, 12.70720,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(987, 2709.45874, -2565.76758, 12.62940,   0.00000, 0.00000, -0.29999);
	CreateDynamicObject(987, 2685.61304, -2565.69653, 12.62940,   0.00000, 0.00000, -0.42000);
	CreateDynamicObject(3624, 2787.42, -2349.74, 16.69,   0.00, 0.00, 41.50);
	CreateDynamicObject(3624, 2788.23, -2500.32, 16.69,   0.00, 0.00, -41.50);
	CreateDynamicObject(964, 2746.46, -2451.16, 13.52,   0.00, 0.00, -180.52);
	CreateDynamicObject(964, 2744.02, -2451.22, 13.52,   0.00, 0.00, 0.00);
	CreateDynamicObject(964, 2881.21, -2401.65, 2.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(964, 2781.16, -2485.38, 12.64,   0.00, 0.00, -180.52);
	CreateDynamicObject(964, 2782.82, -2483.65, 12.64,   0.00, 0.00, -180.52);
	CreateDynamicObject(964, 2784.43, -2481.98, 12.64,   0.00, 0.00, -180.52);
	CreateDynamicObject(3066, 2748.06445, -2436.85840, 12.63764,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3066, 2744.23999, -2433.45313, 12.63764,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3066, 2740.30811, -2435.81787, 12.63764,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3066, 2742.62231, -2466.10571, 12.63764,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3066, 2746.15283, -2469.37378, 12.63764,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3015, 2733.71899, -2453.21533, 12.64100,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3624, 2788.17, -2543.24, 16.69,   0.00, 0.00, -41.50);
	CreateDynamicObject(3624, 2788.22, -2392.20, 16.69,   0.00, 0.00, 41.50);
	CreateDynamicObject(964, 2747.10, -2451.23, 12.64,   0.00, 0.00, -180.52);
	CreateDynamicObject(964, 2745.79, -2451.21, 12.64,   0.00, 0.00, -180.52);
	CreateDynamicObject(964, 2744.53, -2451.20, 12.64,   0.00, 0.00, -180.52);
	CreateDynamicObject(964, 2743.24, -2451.28, 12.64,   0.00, 0.00, -180.52);
	CreateDynamicObject(1723, 2865.69751, -2442.57813, 10.98100,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3066, 2861.95850, -2352.63867, 12.02390,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3066, 2865.40210, -2362.71240, 12.02390,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3066, 2868.63135, -2373.83960, 12.02390,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3066, 2871.40186, -2369.09009, 12.02390,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18257, 2862.48169, -2397.33936, 10.97800,   0.00000, 0.00000, 269.75000);
	CreateDynamicObject(18257, 2866.71460, -2388.18335, 10.97800,   0.00000, 0.00000, 269.75000);
	CreateDynamicObject(5154, 2872.33, -2342.28, 19.08,   0.00, 0.00, -90.06);
	CreateDynamicObject(1649, 2865.26343, -2346.35962, 12.68660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1649, 2869.70337, -2346.35962, 12.68660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1649, 2874.12354, -2346.35962, 12.68660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1649, 2878.56836, -2346.35962, 12.68660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19313, 2879.80420, -2332.29956, 17.97650,   90.00000, 0.00000, -89.94000);
	CreateDynamicObject(19313, 2873.14331, -2332.30640, 17.97650,   90.00000, 0.00000, -89.94000);
	CreateDynamicObject(19313, 2866.49585, -2332.33325, 17.97650,   90.00000, 0.00000, -89.94000);
	CreateDynamicObject(19313, 2879.15918, -2346.35425, 17.97650,   90.00000, 0.00000, -89.94000);
	CreateDynamicObject(8613, 2871.82153, -2331.28516, 205904.00000,   0.00000, 0.00000, -90.54000);
	CreateDynamicObject(5130, 2872.55298, -2329.66602, 20.95180,   0.00000, 0.00000, 44.76000);
	CreateDynamicObject(5153, 2871.91821, -2337.68604, 22.91070,   0.00000, 0.00000, 90.54000);
	CreateDynamicObject(5153, 2874.03882, -2337.68896, 22.91070,   0.00000, 0.00000, 90.24000);
	CreateDynamicObject(11146, 2873.36670, -2425.82983, 13.12300,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1649, 2882.95410, -2346.32056, 12.68660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1649, 2883.01074, -2346.25781, 15.00660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3753, 2752.54443, -2572.27539, 3.03906,   3.14159, 0.00000, 0.00000);
	CreateDynamicObject(10829, 2723.89, -2395.29, 12.52,   0.00, 0.00, 0.00);
	CreateDynamicObject(987, 2684.56, -2377.41, 12.62,   0.00, 0.00, 0.00);
	CreateDynamicObject(3279, 2737.39, -2332.89, 12.60,   0.00, 0.00, -90.18);
	CreateDynamicObject(3279, 2671.44, -2332.79, 12.62,   0.00, 0.00, -0.36);
	CreateDynamicObject(3279, 2702.96, -2492.06, 12.46,   0.00, 0.00, 1.02);
	CreateDynamicObject(3279, 2724.88, -2413.13, 12.57,   0.00, 0.00, -0.54);
	CreateDynamicObject(3279, 2769.25, -2563.06, 12.62,   0.00, 0.00, -180.00);
	CreateDynamicObject(3279, 2732.24, -2555.86, 12.63,   0.00, 0.00, -0.12);
	CreateDynamicObject(987, 2675.65, -2369.62, 12.62,   0.00, 0.00, -41.28);
	CreateDynamicObject(987, 2666.70, -2361.74, 12.62,   0.00, 0.00, -41.28);
	CreateDynamicObject(987, 2666.70, -2349.93, 12.62,   0.00, 0.00, -90.00);
	CreateDynamicObject(987, 2666.70, -2338.05, 12.62,   0.00, 0.00, -90.00);
	CreateDynamicObject(987, 2666.71, -2330.25, 12.63,   0.00, 0.00, -90.00);
	CreateDynamicObject(987, 2720.37, -2409.47, 12.46,   0.00, 0.00, -90.66);
	CreateDynamicObject(987, 2720.42, -2389.46, 12.63,   0.00, 0.00, -89.94);
	CreateDynamicObject(987, 2720.41, -2377.53, 12.62,   0.00, 0.00, -89.94);
	CreateDynamicObject(987, 2727.22, -2549.42, 12.63,   0.00, 0.00, -90.18);
	CreateDynamicObject(987, 2727.22, -2553.65, 12.63,   0.00, 0.00, -90.24);
	CreateDynamicObject(987, 2697.64, -2487.43, 12.65,   0.00, 0.00, -89.64);
	CreateDynamicObject(987, 2697.75, -2499.28, 12.65,   0.00, 0.00, -89.64);
	CreateDynamicObject(987, 2697.77, -2502.28, 12.65,   0.00, 0.00, -89.64);
	CreateDynamicObject(987, 2708.37, -2377.45, 12.62,   0.00, 0.00, 0.00);
	CreateDynamicObject(987, 2696.51, -2377.42, 12.62,   0.00, 0.00, 0.00);
	CreateDynamicObject(19122, 2719.80, -2400.24, 13.09,   0.00, 0.00, 0.00);
	CreateDynamicObject(19122, 2719.82, -2410.51, 13.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(3885, 2865.12085, -2465.65698, 21.00584,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3884, 2865.54175, -2466.18188, 21.49668,   0.00000, 0.00000, -103.26000);
	CreateDynamicObject(3885, 2866.44458, -2401.03638, 18.06309,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3884, 2867.13379, -2401.06421, 18.55768,   0.00000, 0.00000, -55.25999);
	CreateDynamicObject(3885, 2871.52026, -2353.80566, 22.24931,   0.00000, 0.00000, -17.45989);
	CreateDynamicObject(5153, 2871.66187, -2350.81689, 22.83070,   0.00000, 0.00000, 90.18000);
	CreateDynamicObject(5153, 2871.64575, -2346.76807, 22.83000,   0.00000, 0.00000, 270.71979);
	CreateDynamicObject(5153, 2865.61792, -2350.77490, 22.83070,   0.00000, 0.00000, 90.18000);
	CreateDynamicObject(5153, 2865.57739, -2346.73975, 22.83000,   0.00000, 0.00000, 270.71979);
	CreateDynamicObject(3885, 2877.28931, -2354.02222, 22.30930,   0.00000, 0.00000, -17.45990);
	CreateDynamicObject(5153, 2877.23730, -2350.86133, 22.83070,   0.00000, 0.00000, 90.18000);
	CreateDynamicObject(5153, 2877.24805, -2346.80518, 22.83000,   0.00000, 0.00000, 270.71979);
	CreateDynamicObject(3885, 2865.74512, -2353.55225, 22.24931,   0.00000, 0.00000, -17.45989);
}

stock mapInitLSaRemove(playerid)
{
	RemoveBuildingForPlayer(playerid, 5156, 2838.0391, -2423.8828, 10.9609, 0.25);
	RemoveBuildingForPlayer(playerid, 5159, 2838.0313, -2371.9531, 7.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 5160, 2829.9531, -2479.5703, 5.2656, 0.25);
	RemoveBuildingForPlayer(playerid, 5161, 2838.0234, -2358.4766, 21.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 5162, 2838.0391, -2423.8828, 10.9609, 0.25);
	RemoveBuildingForPlayer(playerid, 5163, 2838.0391, -2532.7734, 17.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 5164, 2838.1406, -2447.8438, 15.7266, 0.25);
	RemoveBuildingForPlayer(playerid, 5165, 2838.0313, -2520.1875, 18.4141, 0.25);
	RemoveBuildingForPlayer(playerid, 5166, 2829.9531, -2479.5703, 5.2656, 0.25);
	RemoveBuildingForPlayer(playerid, 5167, 2838.0313, -2371.9531, 7.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 3689, 2685.3828, -2366.0547, 19.9531, 0.25);
	RemoveBuildingForPlayer(playerid, 3690, 2685.3828, -2366.0547, 19.9531, 0.25);
	RemoveBuildingForPlayer(playerid, 3710, 2788.1563, -2417.7891, 16.7266, 0.25);
	RemoveBuildingForPlayer(playerid, 3710, 2788.1563, -2455.8828, 16.7266, 0.25);
	RemoveBuildingForPlayer(playerid, 3710, 2788.1563, -2493.9844, 16.7266, 0.25);
	RemoveBuildingForPlayer(playerid, 3744, 2771.0703, -2372.4453, 15.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 3744, 2789.2109, -2377.6250, 15.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 3744, 2774.7969, -2386.8516, 15.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 3744, 2771.0703, -2520.5469, 15.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 3744, 2774.7969, -2534.9531, 15.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 3746, 2814.2656, -2356.5703, 25.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 3746, 2814.2656, -2521.4922, 25.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 5335, 2829.9531, -2479.5703, 5.2656, 0.25);
	RemoveBuildingForPlayer(playerid, 5336, 2829.9531, -2479.5703, 5.2656, 0.25);
	RemoveBuildingForPlayer(playerid, 3770, 2795.8281, -2394.2422, 14.1719, 0.25);
	RemoveBuildingForPlayer(playerid, 5352, 2838.1953, -2488.6641, 29.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2713.0625, -2508.3047, 16.3594, 0.25);
	RemoveBuildingForPlayer(playerid, 1306, 2742.2656, -2481.5156, 19.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 5326, 2661.5156, -2465.1406, 20.1094, 0.25);
	RemoveBuildingForPlayer(playerid, 1306, 2742.2656, -2416.5234, 19.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 3578, 2639.1953, -2392.8203, 13.1719, 0.25);
	RemoveBuildingForPlayer(playerid, 3578, 2663.8359, -2392.8203, 13.1719, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2637.1719, -2385.8672, 16.4141, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2692.6797, -2387.4766, 16.4141, 0.25);
	RemoveBuildingForPlayer(playerid, 3574, 2774.7969, -2534.9531, 15.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 3574, 2771.0703, -2520.5469, 15.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2783.7813, -2501.8359, 14.6953, 0.25);
	RemoveBuildingForPlayer(playerid, 3624, 2788.1563, -2493.9844, 16.7266, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2783.7813, -2486.9609, 14.6563, 0.25);
	RemoveBuildingForPlayer(playerid, 3578, 2747.0078, -2480.2422, 13.1719, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2783.7813, -2463.8203, 14.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3624, 2788.1563, -2455.8828, 16.7266, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2783.7813, -2448.4766, 14.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2783.7813, -2425.3516, 14.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3574, 2774.7969, -2386.8516, 15.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 3574, 2771.0703, -2372.4453, 15.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2783.7813, -2410.2109, 14.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 3624, 2788.1563, -2417.7891, 16.7266, 0.25);
	RemoveBuildingForPlayer(playerid, 3574, 2789.2109, -2377.6250, 15.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 1278, 2802.4297, -2556.5234, 26.7031, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2791.9531, -2501.8359, 14.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2797.5156, -2486.8281, 14.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2791.9531, -2486.9609, 14.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2791.9531, -2463.8203, 14.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2797.5156, -2448.3438, 14.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2791.9531, -2448.4766, 14.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2791.9531, -2425.3516, 14.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2791.9531, -2410.2109, 14.6563, 0.25);
	RemoveBuildingForPlayer(playerid, 3761, 2797.5156, -2410.0781, 14.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3626, 2795.8281, -2394.2422, 14.1719, 0.25);
	RemoveBuildingForPlayer(playerid, 3620, 2814.2656, -2521.4922, 25.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 5157, 2838.0391, -2532.7734, 17.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 5154, 2838.1406, -2447.8438, 15.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 3724, 2838.1953, -2488.6641, 29.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 3620, 2814.2656, -2356.5703, 25.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 5155, 2838.0234, -2358.4766, 21.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 3724, 2838.1953, -2407.1406, 29.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 5158, 2837.7734, -2334.4766, 11.9922, 0.25);
}