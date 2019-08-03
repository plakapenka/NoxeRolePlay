#include <a_samp>
#include <core>
#include <float>

#pragma tabsize 0
new PlayerText:gHungerText3[MAX_PLAYERS];
new Text:gHungerText1;// бокс(черная обводка)
new Text:gHungerText2;// фон полоски


new radioOnline[][][] ={
{"http://noxe-rp.su/radio/181beat.m3u", "181 Beat"},
{"http://noxe-rp.su/radio/loveradio.m3u", "Love Radio"},
{"http://noxe-rp.su/radio/radiorecord.m3u", "Radio Record"},
{"http://noxe-rp.su/radio/trancefm.m3u", "Trance FM"},
{"http://noxe-rp.su/radio/musik_jam.m3u", "Musik Jam"},
{"http://noxe-rp.su/radio/urbanhit.m3u", "Urban Hit"}
};
main()
{
    new houseInte[42] = {5,6,9,10,8,11,1,9,6,1,2,2,3,10,5,3,2,1,10,15,12,4,15,5,15,15,2,5,2,6,4,6,8,1,2,8,8,9,9,1,10,2};
	new Float:houseCord[42][] = {
	{2233.57, -1114.97, 1050.88, 5.0},
	{2196.6, -1204.51, 1049.02},
	{2317.82, -1026.76, 1050.22},
	{2259.39, -1135.64, 1050.64},
	{2365.17, -1135.58, 1050.88},
	{2282.99, -1140.27, 1050.9},
	{2218.4, -1076.32, 1050.48},
	{83.014, 1322.29, 1083.87},
	{234.381, 1063.73, 1084.21},
	{243.742, 304.976, 999.148},
	{266.515, 304.944, 999.148},
	{2468.45, -1698.35, 1013.51},
	{2496.03, -1692.42, 1014.74},
	{2269.84, -1210.43, 1047.56},
	{227.344, 1114.22, 1081.0},
	{235.405, 1186.98, 1080.26},
	{225.971, 1239.97, 1082.14},
	{223.217, 1287.64, 1082.14},
	{23.8918, 1340.54, 1084.38},
	{295.133, 1472.56, 1080.26},
	{2324.35, -1148.76, 1050.71},
	{-261.195, 1456.73, 1084.37},
	{328.007, 1478.36, 1084.44},
	{22.9166, 1403.98, 1084.43},
	{386.502, 1471.72, 1080.19},
	{376.324, 1417.27, 1081.33},
	{447.25, 1397.76, 1084.3},
	{140.342, 1366.7, 1083.86},
	{491.169, 1398.91, 1080.26},
	{234.149, 1064.4, 1084.21},
	{261.112, 1284.91, 1080.26},
	{-68.8663, 1351.94, 1080.21},
	{2807.55, -1174.22, 1025.57},
	{2217.45, -1076.34, 1050.48},
	{2237.53, -1081.1, 1049.02},
	{2365.33, -1135.16, 1050.88},
	{-42.6872, 1405.89, 1084.43},
	{82.9296, 1322.94, 1083.87},
	{260.602, 1237.93, 1084.26},
	{244.211, 305.121, 999.148},
	{422.148, 2536.35, 10.0},
	{226.17, 1239.97, 1082.14}
	};
	
	for(new i; i < 42; i++)
	{
	    printf("interior_info[%d][int_x] = %f;",i, houseCord[i][0]);
	    printf("interior_info[%d][int_y] = %f;",i, houseCord[i][1]);
	    printf("interior_info[%d][int_z] = %f;",i, houseCord[i][2]);
	    printf("interior_info[%d][int_int] = %d;\n",i, houseInte[i]);
	    
	}
	
//	printf("%s",radioOnline[2][1][0]);
	print("\n----------------------------------");
	print("  Bare Script\n");
	print("----------------------------------\n");
}

public OnPlayerConnect(playerid)
{

	
	GameTextForPlayer(playerid,"~w~SA-MP: ~r~Bare Script",5000,5);
	return 1;
}

public OnPlayerCommandText(playerid, cmdtext[])
{
	new idx;
	new cmd[256];
	
	cmd = strtok(cmdtext, idx);

	if(strcmp(cmd, "/yadayada", true) == 0) {
    	return 1;
	}

	return 0;
}

public OnPlayerSpawn(playerid)
{
	SetPlayerInterior(playerid,0);
	TogglePlayerClock(playerid,0);
	return 1;
}

public OnPlayerDeath(playerid, killerid, reason)
{
   	return 1;
}

SetupPlayerForClassSelection(playerid)
{
 	SetPlayerInterior(playerid,14);
	SetPlayerPos(playerid,258.4893,-41.4008,1002.0234);
	SetPlayerFacingAngle(playerid, 270.0);
	SetPlayerCameraPos(playerid,256.0815,-43.0475,1004.0234);
	SetPlayerCameraLookAt(playerid,258.4893,-41.4008,1002.0234);
}

public OnPlayerRequestClass(playerid, classid)
{
	SetupPlayerForClassSelection(playerid);
	return 1;
}

public OnGameModeInit()
{
	SetGameModeText("Bare Script");
	ShowPlayerMarkers(1);
	ShowNameTags(1);
	AllowAdminTeleport(1);

	AddPlayerClass(265,1958.3783,1343.1572,15.3746,270.1425,0,0,0,0,-1,-1);
	gHungerText1 = TextDrawCreate(577.000000, 58.000000, "_");
	TextDrawFont(gHungerText1, 1);
	TextDrawLetterSize(gHungerText1, 0.533333, 0.449997);
	TextDrawTextSize(gHungerText1, 282.500000, 58.000000);
	TextDrawSetOutline(gHungerText1, 1);
	TextDrawSetShadow(gHungerText1, 0);
	TextDrawAlignment(gHungerText1, 2);
	TextDrawColor(gHungerText1, -1);
	TextDrawBackgroundColor(gHungerText1, 255);
	TextDrawBoxColor(gHungerText1, 255);
	TextDrawUseBox(gHungerText1, 1);
	TextDrawSetProportional(gHungerText1, 1);
	TextDrawSetSelectable(gHungerText1, 0);

	gHungerText2 = TextDrawCreate(577.000000, 60.000000, "_");
	TextDrawFont(gHungerText2, 1);
	TextDrawLetterSize(gHungerText2, 0.587499, 0.049996);
	TextDrawTextSize(gHungerText2, 184.000000, 55.500000);
	TextDrawSetOutline(gHungerText2, 1);
	TextDrawSetShadow(gHungerText2, 0);
	TextDrawAlignment(gHungerText2, 2);
	TextDrawColor(gHungerText2, 16777215);
	TextDrawBackgroundColor(gHungerText2, 255);
	TextDrawBoxColor(gHungerText2, 0x689f38FF);
	TextDrawUseBox(gHungerText2, 1);
	TextDrawSetProportional(gHungerText2, 1);
	TextDrawSetSelectable(gHungerText2, 0);
	return 1;
}

strtok(const string[], &index)
{
	new length = strlen(string);
	while ((index < length) && (string[index] <= ' '))
	{
		index++;
	}

	new offset = index;
	new result[20];
	while ((index < length) && (string[index] > ' ') && ((index - offset) < (sizeof(result) - 1)))
	{
		result[index - offset] = string[index];
		index++;
	}
	result[index - offset] = EOS;
	return result;
}
