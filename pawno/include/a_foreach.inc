#define PlayerForeach(%1)\
	for(new %1; %1 <= F_LastPlayerID; %1++) if(F_PlayerConnected[%1])

forward F_OnPlayerConnect(playerid);
forward F_OnPlayerDisconnect(playerid, reason);

new bool:F_PlayerConnected[MAX_PLAYERS], F_PlayerName[MAX_PLAYERS][MAX_PLAYER_NAME];
new F_LastPlayerID = -1;

public OnPlayerConnect(playerid)
{
	if(!IsPlayerNPC(playerid))
	{
		F_PlayerConnected[playerid] = true;
		if(playerid > F_LastPlayerID) F_LastPlayerID = playerid;
		GetPlayerName(playerid, F_PlayerName[playerid], MAX_PLAYER_NAME);
	}
	if(funcidx("F_OnPlayerConnect") != -1) CallLocalFunction("F_OnPlayerConnect", "d", playerid);
	return 1;
}

public OnPlayerDisconnect(playerid, reason)
{
	F_PlayerConnected[playerid] = false;
	if(playerid == F_LastPlayerID)
	{
		for(new A = MAX_PLAYERS-1; A != -1; A--)
		{
			if(F_PlayerConnected[A] == true)
			{
				F_LastPlayerID = A;
				break;
			}
			if(!A) F_LastPlayerID = -1;
		}
	}
	if(funcidx("F_OnPlayerDisconnect") != -1) CallLocalFunction("F_OnPlayerDisconnect", "dd", playerid, reason);
	return 1;
}

#if defined _ALS_OnPlayerConnect
    #undef OnPlayerConnect
#else
    #define _ALS_OnPlayerConnect
#endif
#define OnPlayerConnect F_OnPlayerConnect

#if defined _ALS_OnPlayerDisconnect
    #undef OnPlayerDisconnect
#else
    #define _ALS_OnPlayerDisconnect
#endif
#define OnPlayerDisconnect F_OnPlayerDisconnect
