#ifndef menus_h
#define menus_h

void NewGame();  			  // Main Game
void Options() {};        // Shows  Game Options
void HighScores();        // Does HighScores
void Credits();           // Shows the Credits
void Instruct();          // Shows the Instructions
void ChangeOptions();     // Changes the options
void SetDefaultOptions(); // Sets Default Options
void Quit();              // Quits the game

// This function Draws the main menu
void DrawMainMenu()
{

	top:                   // the begining!  to go back to after selection

	int keyb = 0;          // Variable for keyboard scan codes
	int x = 120;           // x & y locations for the up-left corner of the menu
	int y = 25;

	DrawString( "Snaker", x, 13, 65 );          // Draws the various menu options
	DrawString( "New Game", x, 25, 65 );
	DrawString( "Credits", x, 31, 65 );
	DrawString( "High Scores", x, 37, 65 );
	DrawString( "Instructions", x, 43, 65 );
	DrawString( "Exit", x, 49, 65 );

	GrabPallette();                            // Stores the pallette
	RandomPalette();                           // Sets a random color pallette

	Pal( 65, 0, 0, 0 );                        // Makes color 65 black for words

	Line( x-2, y+2, x-6, y+2, 65 );            // My arrow pointer
	Line( x-2, y+2, x-6, y+1, 65 );
	Line( x-2, y+2, x-6, y+3, 65 );
	while ( keyb!=SCAN_ENTER )                  // while enter isn't hit
	{

		PixelDance();                            // Magical pixel dance!

		keyb=Get_Scan_Code();                    // Gets the scan code

		// moves arrow down if that key is hit
		if ( keyb==SCAN_DOWN )
		{
			Line( x-2, y+2, x-6, y+2, rand() % 31 + 31 );   // Erases the arrow
			Line( x-2, y+2, x-6, y+3, rand() % 31 + 31 );
			Line( x-2, y+2, x-6, y+1, rand() % 31 + 31 );
			y+=6;
			if ( y > 50 )                                   // if the arrow goes
				y=25;                                        // to far down, put it
			Line( x-2, y+2, x-6, y+2, 65 );                 // at the top
			Line( x-2, y+2, x-6, y+1, 65 );                 // Draws new black arrow
			Line( x-2, y+2, x-6, y+3, 65 );
		}  // end of if

		// moves arrow up if up is hit
		if ( keyb==SCAN_UP )
		{
			Line( x-2, y+2, x-6, y+2, rand() % 31 + 31 );   // Erases the arrow
			Line( x-2, y+2, x-6, y+3, rand() % 31 + 31 );
			Line( x-2, y+2, x-6, y+1, rand() % 31 + 31 );
			y-=6;                                           // moves it up
			if ( y < 24 )
				y=49;                                        // checks for boundries
			Line( x-2, y+2, x-6, y+2, 65 );                 // draws new arrow
			Line( x-2, y+2, x-6, y+1, 65 );
			Line( x-2, y+2, x-6, y+3, 65 );
		}   // end of if
	}      // end of while

	RestorePallette();                  // makes the palette normal

	ClearScreen( 0 );                   // Makes the screen black

	switch( y )                         // detects which option was chosen
	{                                   // based on the y location of the arrow
		case 25:
			NewGame();                    // Starts a new game
			break;
		case 31:
			Credits();                    // shows the credits
			break;
		case 37:
			HighScores();                 // shows the high scores
			break;
		case 43:
			Instruct();                   // gives you instructions
			break;
		case 49:
			Quit();                       // quits
			break;
	}
	goto top;                         // after a game, or credits, etc,
												 // this returns to top
}
// This function exits the program
void Quit()
{
	RandomPalette();
	Pal( 65, 0, 0, 0 );
	DrawString( "thanks for playing", 100, 75, 65 );
	while ( !kbhit() )
		PixelDance();
	getch();
	exit(1);
}
// This function displays the instructions
void Instruct()
{
	GrabPallette();
	RandomPalette();
	Pal( 65, 0, 0, 0 );

	DrawString( "I have not enough time to explain this in detail but", 5, 15, 65 );
	DrawString( "you move with the arrows and try to get the dots", 5, 25, 65 );
	DrawString( "do not run into anything including your own tail", 5, 35, 65 );
	DrawString( "eat a certain number of dots to pass the level", 5, 45, 65 );

	while( Get_Scan_Code() != SCAN_ENTER ) { PixelDance(); }

	RestorePallette();

	ClearScreen( 0 );
}
// This Function does the high scores & displays them
void HighScores()
{
	char yourname[20];					// your name you enter if you have a high score
	int yourscore;                   // your score
	char names[13][20]={""};         // names off the high score list
	int scores[13]={0};              // scores off the high score list
	int yourplace;                   // wherever you placed on the list

	ofstream outdata;                // data going out to file
	ifstream indata;                 // data getting read

	indata.open( "highscores.$$$", ios::binary );  // opens the file

	for ( int a = 9; a>=0; a-- )                   // loops 10 times for scores
	{                                              // and names off the list
		indata.read((char*) &names[a], sizeof names[a] );    // reads the name
		indata.read((char*) &scores[a], sizeof scores[a] );  // reads the score
	}

	indata.close();                                // tidying up

	int tmp=0;                                     // a variable for if you
																  // achieved a high score
	if ( pl.score[0] < scores[9] )                 // checks to see if you made the list
		tmp=1;
	if ( pl.score[1] < scores[9] )                 // for player 2 also
		tmp=2;

	for ( int x = tmp; x < NumberOfPlayers; x++ )  // loop the number of player
	{                                              // times if they made the list

		ClearScreen( 0 );
																  // sets yourscore
		yourscore = pl.score[x];

		for ( a = 0; a <= 9; a++ )                  // finds what place you took
		{
			if ( yourscore >= scores[a] )            // if yourscore is high enough
			{
				yourplace = a+1;                      // gets your place

				ClearScreen( 0 );
				GrabPallette();
				RandomPalette();

				DrawString( "you achieved a high score! Enter your name", 5, 5, 65 );

				GetInputChar( 10, 15 );               // gets a character input in
																  // my font names istring
				strcpy( yourname, istring );          // makes yourname the same as istring
				break;                                // quits the for loop
			} // end of if
		}  // end of for

		ClearScreen( 0 );
		RestorePallette();

		for ( int b = 10; b >= yourplace-1; b-- )    // rearranges the high score list
		{
			scores[b+1]=scores[b];                   // moves all data down the list 1
			strcpy( names[b+1], names[b] );          // starting from your place
		}

		strcpy( names[yourplace-1], yourname );       // puts your name & score in the array
		scores[yourplace-1]=yourscore;                // and in the correct postion
		outdata.open( "highscores.$$$", ios::trunc );  // opens file and erases contents,
		outdata.close();                               // then closes it
		outdata.open( "highscores.$$$", ios::binary ); // reopens the file for binary writing

		for ( a = 9; a>=0; a-- )                    // outputs the scores and saves it
		{                                           // to the file
			outdata.write((char*) &names[a], sizeof names[a] );   // writes the data
			outdata.write((char*) &scores[a], sizeof scores[a] );
		}
		outdata.close();                            // always pays to be tidy!
	}
	// Done with the rearranging! now to draw the list

	GrabPallette();
	RandomPalette();
	Pal( 65, 0, 0, 0 );

	DrawString( "snaker high scores list", 79, 15, 65 );
	char string[25];           // Temporary data for storing my scores so they
										// can be changed to char and printed
	// Just draws the scores & names
	for ( a = 1; a <= 10; a++ )
	{
		DrawString( names[a-1], 60, a*10+30, 65 );      // Draws the name

		ltoa( a, string, 10 );                          // changes the int a to char
		DrawString( string, 45, a*10+30, 65 );          // and puts it in string

		ltoa( scores[a-1], string, 10 );                // same for scores
		DrawString( string, 210, a*10+30, 65 );
	}
	while ( Get_Scan_Code() != SCAN_ENTER ) { PixelDance(); }  // my fancy pixel dance

	RestorePallette();                                 // makes palette normal

	ClearScreen( 0 );

	pl.score[0]=0;                                     // resets players scores
	pl.score[1]=0;
}
// This function begins, and does the main game
void NewGame()
{

	GrabPallette();
	RandomPalette();

	Pal( 65, 0, 0, 0 );

	pl.score[0]=0;
	pl.score[1]=0;

	SetBalls( 90 );           // make sure 90 balls are ready to be displayed
	SetSmartWorms( 90 );      // make sure 90 worms are ready to be displayed

	GenerateFood();           // generates a random food location

	// Asks for an option change
	DrawString( "Would you like to change any options", 1, 97, 65 );
	while ( !kbhit() )
		PixelDance( );

	int choice;                 // basic decision variable
	choice = Get_Scan_Code();

	RandomPalette();
	Pal( 65, 0, 0, 0 );

	if ( choice == SCAN_Y )     // if yes, change options
		ChangeOptions();

	if ( choice != SCAN_Y )     // if not yes, dont change options
		SetDefaultOptions();

	pl.lives[0]=NumberOfLives;  // set each players lives

	if ( NumberOfPlayers > 1 )  // set player 2's also, only if he is alive though
		pl.lives[1]=NumberOfLives;
	else
		pl.lives[1]=0;

	RestorePallette();
	SetWormsPalette();          // sets colors for my glowing worms

	pl.level=StartingLevel;     // sets starting level

	SetPlayers();               // sets default start locations, etc. of all players
	ClearScreen( 0 );
	while ( pl.lives[0] > 0 || pl.lives[1] > 0 )   // while at least 1 player is alive
	{
		// Everything must be redrawn at each frame, because the worm dying sequence
		// sometimes erases this and that

		DrawLevel( pl.level );              // Draw the level
		DrawFood();                         // draw the food

		// Note that speeds are based on how many times they are drawn & moved in one
		// frame, fast 3 times, medium 2 times, and slow 1 time

		DrawSmartWorms( NumberOfFastSmartWorms );   // Draw the Fast worms
		delay( SpeedOfGame/8 );                     // pause slightly

		DrawSmartWorms( NumberOfFastSmartWorms+NumberOfMediumSmartWorms ); // draw the medium worms
		delay( SpeedOfGame/8 );                     // pause

		DrawSmartWorms( NumberOfSmartWorms );       // draw the slow worms
		delay( SpeedOfGame/8 );                     // pause

		DrawBalls( NumberOfFastBalls );             // draw the fast balls
		delay( SpeedOfGame/8 );                     // pause

		DrawBalls( NumberOfFastBalls+NumberOfMediumBalls ); // draw medium balls
		delay( SpeedOfGame/8 );                             // pause

		DrawBalls( NumberOfBalls );                 // draw slow balls
		delay( SpeedOfGame/8 );                     // pause

		if ( pl.lives[0] > 0 )                      // if player 1 is alive
		{
			for ( int a=0; a<SpeedOfPlayer[0]; a++ ) // draw him the correct number
				{                                     // of times
					delay( SpeedOfGame/8 );            // pause
					DrawPlayer( 0 );
				}
		}

		if ( ( NumberOfPlayers  > 1 ) && ( pl.lives[1] > 0 ) )  // if player 2 is alive
		{
			for ( int a=0; a<SpeedOfPlayer[1]; a++ )     // draw him
			{
					delay( SpeedOfGame/8 );                // pause
					DrawPlayer( 1 );
			}
		}
	}

	GrabPallette();
	RandomPalette();

	Pal( 65, 0, 0, 0 );
	// Uh oh, games over dude

	DrawString ( "GAME OVER", 100, 5, 65 );
	DrawString ( "Player 1 final Score", 75, 50, 65 );

	char string[25];                  // string for score to be transformed into
	ltoa( pl.score[0], string, 10 );  // transformer

	DrawString ( string, 125, 60, 65 );

	if ( NumberOfPlayers > 1 )        // if there was 2 players, draw his score too
	{
		DrawString ( "Player 2 final Score", 75, 100, 65 );
		ltoa( pl.score[1], string, 10 );
		DrawString ( string, 125, 110, 65 );
	}
	// wait for keypress
	DrawString( "Press the enter key", 1, 194, 65 );
	while( Get_Scan_Code() != SCAN_ENTER ) { PixelDance(); }

	RestorePallette();
	ClearScreen( 0 );
	// shows the highscores, and puts your name on there if you made it
	HighScores();
	// back to the menu...
}
// This function shows the credits
void Credits()
{
	GrabPallette();
	RandomPalette();
	Pal( 65, 0, 0, 0 );

	DrawString( "This game was made completely and entirely by", 1, 1, 65 );
	DrawString( "Eric Anderson", 1, 11, 65 );
	DrawString( "If you paid for this game you were ripped off", 1, 51, 65 );
	DrawString( "This game was made to be free", 1, 61, 65 );
	DrawString( "Feel free to do whatever with this program", 1, 71, 65 );
	DrawString( "version 1  10th of march 2000", 1, 194, 65 );

	while( Get_Scan_Code() != SCAN_ENTER ) { PixelDance(); }
	RestorePallette();
	ClearScreen( 0 );
	// back to the menu...
}
// Thats all for this header file
#endif
