#include <a_samp>
#include <core>
#include <float>
#include 	nex-ac
#pragma tabsize 0

main()
{

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
new bool: usetp;
public OnPlayerCommandText(playerid, cmdtext[])
{
	new idx;
	new cmd[256];
	
	cmd = strtok(cmdtext, idx);

	if(strcmp(cmd, "/yadayada", true) == 0)
	{
	    if(usetp)
	    {
			new car = GetPlayerVehicleID(playerid);
			SetVehiclePos(car, 1483.9399,-1740.8800,13.5469);
			SetVehicleZAngle(car, 15);
			SetVehicleVirtualWorld(car, 0);
			LinkVehicleToInterior(car, 0);

			for(new i; i < MAX_PLAYERS; i++)
			{
				if(IsPlayerInVehicle(i, car))
				{

					SetPlayerInterior(i,0);
					SetPlayerVirtualWorld(i,0);
				}
			}
			usetp = false;
		}
		else
		{
			new car = GetPlayerVehicleID(playerid);
			SetVehiclePos(car, 2208.0667,-1074.9144,1050.4844);
			SetVehicleZAngle(car, 80);
			SetVehicleVirtualWorld(car, 28);
			LinkVehicleToInterior(car, 1);

			for(new i; i < MAX_PLAYERS; i++)
			{
				if(IsPlayerInVehicle(i, car))
				{

					SetPlayerInterior(i,1);
					SetPlayerVirtualWorld(i,28);
				}
			}
			usetp = true;
		}
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
    CreateVehicle(560, 1947.2687,1363.5668,9.1094,47.0705, 0, 0, 600);
	SetGameModeText("Bare Script");
	ShowPlayerMarkers(1);
	ShowNameTags(1);
	AllowAdminTeleport(1);

	AddPlayerClass(265,1958.3783,1343.1572,15.3746,270.1425,0,0,0,0,-1,-1);

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
