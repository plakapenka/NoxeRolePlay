/*
This script has been generated by Nickk's TextDraw editor
Author is Nickk888
*/

//VARIABLES
new Text:textdraw_0;

//TEXTDRAWS
textdraw_0 = TextDrawCreate(568.000000, 58.000000, "_");
TextDrawFont(textdraw_0, 1);
TextDrawLetterSize(textdraw_0, 0.979166, 0.349996);
TextDrawTextSize(textdraw_0, 544.500000, 58.000000);
TextDrawSetOutline(textdraw_0, 1);
TextDrawSetShadow(textdraw_0, 0);
TextDrawAlignment(textdraw_0, 1);
TextDrawColor(textdraw_0, -1);
TextDrawBackgroundColor(textdraw_0, 255);
TextDrawBoxColor(textdraw_0, 255);
TextDrawUseBox(textdraw_0, 1);
TextDrawSetProportional(textdraw_0, 1);
TextDrawSetSelectable(textdraw_0, 0);


//SHOW/HIDE
TextDrawShowForPlayer(playerid, textdraw_0); //Shows Textdraw for Player.
TextDrawShowForAll(textdraw_0); //Shows Textdraw for all players.

TextDrawHideForPlayer(playerid, textdraw_0); //Hides TextDraw for player.
TextDrawHideForAll(textdraw_0); //Hides Textdraw for all players.

PlayerTextDrawShow(playerid, textdraw_0[playerid]); //Shows PlayerTextDraw for player.
PlayerTextDrawHide(playerid, textdraw_0[playerid]); //Hides PlayerTextDraw for player.