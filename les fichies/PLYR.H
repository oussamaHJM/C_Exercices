#ifndef plyr_h
#define plyr_h
int dn[4]={0};
// a players structure
struct PLAYER
{
	int x[4];           // the head x, and y locations
	int y[4];
	int tailx[4][300];  // the tail locations
	int taily[4][300];
	int length[4];      // the length of the player
	int status[4];      // the status of the player i.e up, down
	long score[4];      // the score
	int color[4];       // the current color
	int keys[4][4];     // the keys the player uses to move
	int level;          // the level the player(s) is on
	int foodeaten;      // how much food has been eaten
	int voob[4];        // its current "glow" factor
	int dying[4];       // its dying frame
	int lives[4];       // how many llives it has
};
int foodx;             // the locations of the food
int foody;
int foodcolor;         // the color
PLAYER pl;
// this function kills a player ( draws death sequence )
void Kill( int, int, int );
// duh, this draws the food
void DrawFood()
{
	PutPixel( foodx, foody, foodcolor );
	PutPixel( foodx+1, foody, foodcolor );
	PutPixel( foodx, foody+1, foodcolor );
	PutPixel( foodx+1, foody+1, foodcolor );
}
// this function generates a location for the food
void GenerateFood()
{
	back:
	foodx=rand()%320;
	foody=rand()%200;
	foodcolor=rand()%15+1;
	// test for collision
	if ( get_pixel( foodx, foody ) || get_pixel( foodx+1, foody ) || get_pixel( foodx, foody+1) || get_pixel( foodx+1, foody+1 ) )
		goto back;
}
// this function sets default things for the players
void SetPlayers()
{
	pl.foodeaten=0;       // how much food they've eaten
	pl.dying[0]=0;        // their dying sequence
	pl.dying[1]=0;

	pl.voob[0]=253;       // for thier glowing
	pl.voob[2]=243;
	pl.x[0] = 160;        // thw start x and y postions
	pl.y[0] = 198;

	pl.length[0] = 20;    // starting length
	pl.color[0] = 245;    // starting color
	pl.keys[0][0] = 72;   // the default keys
	pl.keys[0][1] = 80;
	pl.keys[0][2] = 77;
	pl.keys[0][3] = 75;
	pl.status[0] = 0;     // which direction its going

	pl.voob[1]=232;       // same stuff for player 2
	pl.voob[3]=222;
	pl.x[1] = 160;
	pl.y[1] = 1;

	pl.length[1] = 20;
	pl.color[1] = 224;
	pl.keys[1][0] = 17;
	pl.keys[1][1] = 31;
	pl.keys[1][2] = 32;
	pl.keys[1][3] = 30;
	pl.status[1] = 1;
}
// this function draws the specified player
void DrawPlayer( int player )
{
	int keyb;
	// this tests for if they are dead or not, if they are, it continues to killem
	if ( pl.dying[player] > 1 && pl.dying[player] < 10 )
		Kill( pl.x[player], pl.y[player], pl.dying[player] );
	if ( pl.dying[player] > 10 && pl.dying[player] < 30)
		Kill ( pl.x[player], pl.y[player], pl.dying[player] );
	// if the player is not dying
	if ( pl.dying[player] < 1 )
	{
		for ( int t = pl.length[player]; t > -1; t-- )     // sets tail locations
		{
			pl.tailx[player][t+1] = pl.tailx[player][t];
			pl.taily[player][t+1] = pl.taily[player][t];
			// draws the player again ( all tail locations )
			if ( t > 2 )
				PutPixel( pl.tailx[player][t-2], pl.taily[player][t-2], pl.color[player] );
		}
	// this is for the glowing effect

	if ( dn[player]==1 )
		pl.color[player]--;
	if ( dn[player]!=1 )
		pl.color[player]++;
	if ( pl.color[player] > pl.voob[player] )
		dn[player]=1;
	if ( pl.color[player] < pl.voob[player+2] )
		dn[player]=0;

	// Sets the new head location
	pl.tailx[player][0] = pl.x[player];
	pl.taily[player][0] = pl.y[player];

	// erases the last part of tail, and draws the new head position
	PutPixel( pl.x[player], pl.y[player], pl.color[player] );
	PutPixel( pl.tailx[ player ][ pl.length[ player ]-1 ], pl.taily[ player ][ pl.length[ player ]-1 ], 0 );

	// moves the player based on its status
	if ( pl.status[player] == 0 )
		pl.y[player]--;
	if ( pl.status[player] == 1 )
		pl.y[player]++;
	if ( pl.status[player] == 2 )
		pl.x[player]++;
	if ( pl.status[player] == 3 )
		pl.x[player]--;

	// wraps the player over to the other side, if nescessary
	if ( pl.x[player] > 319 )
		pl.x[player]=0;
	if ( pl.x[player] < 0 )
		pl.x[player]=319;
	if ( pl.y[player] > 199 )
		pl.y[player]=0;
	if ( pl.y[player] < 0 )
		pl.y[player]=199;

	// checks to see if anyone has pressed a key
	keyb = Get_Scan_Code();

	if ( keyb == SCAN_ESC )   // if escape is hit, end the game
	{
		pl.lives[0]=0;
		pl.lives[1]=0;
	}
	// changes the player's direction if his/her key was hit
	if ( pl.status[0] != 1 )
		if ( keyb == pl.keys[0][0] )
			pl.status[0] = 0;
	if ( pl.status[0] != 0 )
		if ( keyb == pl.keys[0][1] )
			pl.status[0] = 1;
	if ( pl.status[0] != 3 )
		if ( keyb == pl.keys[0][2] )
			pl.status[0] = 2;
	if ( pl.status[0] != 2 )
		if ( keyb == pl.keys[0][3] )
			pl.status[0] = 3;
	// same for player 2
	if ( pl.status[1] != 1 )
		if ( keyb == pl.keys[1][0] )
			pl.status[1] = 0;
	if ( pl.status[1] != 0 )
		if ( keyb == pl.keys[1][1] )
			pl.status[1] = 1;
	if ( pl.status[1] != 3 )
		if ( keyb == pl.keys[1][2] )
			pl.status[1] = 2;
	if ( pl.status[1] != 2 )
		if ( keyb == pl.keys[1][3] )
			pl.status[1] = 3;

	// tests for if player has collided with the food
	if ( ( foodx == pl.x[player] && foody == pl.y[player] )   ||
		  ( foodx+1 == pl.x[player] && foody == pl.y[player] ) ||
		  ( foodx == pl.x[player] && foody+1 == pl.y[player] ) ||
		  ( foodx+1 == pl.x[player] && foody+1 == pl.y[player] ) )
	{
		// erases the food
		PutPixel( foodx, foody, 0 );
		PutPixel( foodx+1, foody, 0 );
		PutPixel( foodx, foody+1, 0 );
		PutPixel( foodx+1, foody+1, 0 );
		// makes snake longer
		pl.length[player]+=15;
		// adds to score
		pl.score[player]+=10;
		// gets a new food location ( will be drawn later, look above )
		GenerateFood();
		// adds 1 to foodeaten
		pl.foodeaten++;
	}
	// tests to see if they have passed the level
	if ( pl.foodeaten == FoodNeedToNextLevel )
	{
		// This is the bonus Screen here, showing how many points & whatnot
		// of a bonus they get
		char string[25];
		GrabPallette();
		RandomPalette();
		Pal( 65, 0, 0, 0 );
		DrawString( "End of Level Bonus", 1, 1, 65 );
		DrawString( "Number of fast balls   80 each", 5, 11, 65 );
		itoa( NumberOfFastBalls*80, string, 10 );
		DrawString( string, 275, 11, 65 );
		DrawString( "Number of medium balls 40 each", 5, 21, 65 );
		itoa( NumberOfMediumBalls*40, string, 10 );
		DrawString( string, 275, 21, 65 );
		DrawString( "Number of slow balls   20 each", 5, 31, 65 );
		itoa( NumberOfSlowBalls*20, string, 10 );
		DrawString( string, 275, 31, 65 );
		DrawString( "Number of fast worms   80 each", 5, 41, 65 );
		itoa( NumberOfFastSmartWorms*80, string, 10 );
		DrawString( string, 275, 41, 65 );
		DrawString( "Number of medium worms 40 each", 5, 51, 65 );
		itoa( NumberOfMediumSmartWorms*40, string, 10 );
		DrawString( string, 275, 51, 65 );
		DrawString( "Number of slow worms   20 each", 5, 61, 65 );
		itoa( NumberOfSlowSmartWorms*20, string, 10 );
		DrawString( string, 275, 61, 65 );
		DrawString( "total of above", 5, 81, 65 );
		long bonus=( ( ( NumberOfFastBalls*80 )+( NumberOfMediumBalls*40 )+( NumberOfSlowBalls*20 )+( NumberOfFastSmartWorms*80 )+( NumberOfMediumSmartWorms*40 )+( NumberOfSlowSmartWorms*20 ) ) );
		ltoa( bonus, string, 10 );
		DrawString( string, 275, 81, 65 );
		// tests to see if players are alive, and deserve to receive the bonus
		if ( pl.lives[0] > 0 )
		{
			pl.score[0]=pl.score[0] + ( bonus );
			DrawString( "Player 1 score ", 5, 121, 65 );
			ltoa( pl.score[0], string, 10 );
			DrawString( string, 275, 121, 65 );
		}
		if ( pl.lives[1] > 0 )
		{
			pl.score[1]=pl.score[1] + ( bonus );
			DrawString( "Player 2 score ", 5, 131, 65 );
			ltoa( pl.score[1], string, 10 );
			DrawString( string, 275, 131, 65 );
		}
		DrawString( "Press the enter key", 1, 194, 65 );
		while( Get_Scan_Code() != SCAN_ENTER )  { PixelDance(); }
		// erases the snakes
		for ( int t = 300; t > -1; t-- )
		{
			pl.tailx[player][t-2]=0;
			pl.taily[player][t-2]=0;
		}
		// resets the needed variables
		pl.foodeaten=0;
		pl.level++;
		SetPlayers();
		RestorePallette();
		SetWormsPalette();
		ClearScreen( 0 );
		}
	}
	// tests for collisions ( not food, but everything else ) and begins to kill
	// the player if nescessary
	if ( get_pixel( pl.x[player], pl.y[player] ) || pl.dying[player] > 0 )
		pl.dying[player]++;
	// tests to see if they are done dying
	if ( pl.dying[player] > 20 )
	{
		// resets the needed variables
		pl.dying[player]=0;
		pl.lives[player]--;
		if ( player == 0 )
		{
			pl.x[player] = 160;
			pl.y[player] = 198;
			pl.status[player] = 0;
		}
		if ( player == 1 )
		{
			pl.x[player] = 160;
			pl.y[player] = 1;
			pl.status[player] = 1;
		}
		pl.length[player]/=2;
		if ( pl.length[player] < 10 )
			pl.length[player] = 10;
		// erases the snake totaly
		for ( int t = 300; t > -1; t-- )
		{
			PutPixel( pl.tailx[player][t-2], pl.taily[player][t-2], 0 );
			pl.tailx[player][t-2]=0;
			pl.taily[player][t-2]=0;
		}
	}
}
// this function kills the snake at x, y, in frame sequence frame
void Kill( int x, int y, int frame )
{
	if ( frame < 10 )
		Circle( x, y, frame-2, frame+193 );
	for ( int b= 0; b < 2; b++ )
		if ( pl.dying[b] > 0 )
			for ( int a = 2; a < 20; a++ )
				if ( pl.length[b] > ((a*10)-15) && frame > a-1 && frame < 10 )
					Circle( pl.tailx[b][(a*10)-15], pl.taily[b][(a*10)-15], frame-a, frame+193 );

	if ( frame > 10 )
		Circle( x, y, frame-12, 0 );
	for ( b= 0; b < 2; b++ )
		if ( pl.dying[b] > 0 )
			for ( int a = 2; a < 20; a++ )
				if ( pl.length[b] > ((a*10)-15) && frame > 10 )
					Circle( pl.tailx[b][(a*10)-15], pl.taily[b][(a*10)-15], frame-12, 0 );
}
// thats all for the players header file...
#endif
