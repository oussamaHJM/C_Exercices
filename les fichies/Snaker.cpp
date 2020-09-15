/*------------------------------------------------------\
|                                                       |
|  SNAKER  a c++ version of the MS qbasic game nibbles  |
|		by  Eric Anderson                                 |
|   questions/comments to vulcan_lord@hotmail.com       |
|    report any bugs to the same address                |
|                                                       |
|    This program was made and compiled in              |
|  Borland C++ version 4.0                              |
|                                                       |
|                                                       |
|	If you would like to make levels for this game       |
|	( probably the easiest part of this game to edit )   |
|	edit the levels header & send it back to me, i'll    |
|	include all your levels plus any others that         |
|	people send me                                       |
|																		  |
\------------------------------------------------------*/

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <dos.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <fstream.h>

unsigned char Pall2[256][3];    // storage for palette values

unsigned char *vga = (unsigned char *) MK_FP(0xA000, 0);   // pointer to video card
// Global Options Variables   pretty self-explainitory
int NumberOfPlayers = 0;
int SpeedOfPlayer[4] = {0};
int NumberOfBalls = 0;
int NumberOfFastBalls = 0;
int NumberOfMediumBalls = 0;
int NumberOfSlowBalls = 0;
int NumberOfSmartWorms = 0;
int NumberOfFastSmartWorms = 0;
int NumberOfMediumSmartWorms = 0;
int NumberOfSlowSmartWorms = 0;
int LengthOfSmartWorms = 0;
int StartingLevel = 0;
int FoodNeedToNextLevel = 0;
int SpeedOfGame = 0;
int NumberOfLives = 0;
#include "grafix.h"      // all of the graphics functions
#include "keyboard.h"    // keyboard handler & font
#include "fonts.h"       // big hairy font
#include "balldraw.h"    // draws the balls
#include "wormai.h"      // draws & does the worms somewhat simple "logic"
#include "levels.h"      // all the levels
#include "plyr.h"        // draws the player
#include "menus.h"       // All the menu functions
#include "optionsm.h"    // options menus to set default or custom

int main()
{
	CreateTable();                  // Creates a table for the circles
	randomize();                    // gee, i wonder what this does
	SetVideoMode();                 // Sets video mode to 320x200x256
	DrawMainMenu();                 // Draws the begining menu
	return 0;
}
