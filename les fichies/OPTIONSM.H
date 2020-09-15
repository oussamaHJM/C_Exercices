#ifndef optionsm.h
#define optionsm.h
// This Funsction sets the options to there deafults
void SetDefaultOptions()
{
	ClearScreen( 0 );
	// asks for players
	DrawString( "How many players  1 or 2", 5, 5, 65 );
	while ( !kbhit() )
		PixelDance( );
	int ch=getch();
	if ( ch == '1' )
		NumberOfPlayers = 1;
	if ( ch == '2' )
		NumberOfPlayers = 2;

	// Then shos all the data and sets it to default
	ClearScreen( 0 );
	if ( NumberOfPlayers > 2 || NumberOfPlayers < 1 )
		NumberOfPlayers = 1;
	DrawString( "Default Options Have Been Set they are", 5, 15, 65 );
	NumberOfLives=4;
	DrawString( "Number of lives per player                         4", 5, 25, 65 );
	SpeedOfPlayer[0]=1;
	DrawString( "Speed of all players                            slow", 5, 35, 65 );
	SpeedOfPlayer[1]=1;
	NumberOfBalls=5;
	DrawString( "Number of balls                                    5", 5, 45, 65 );
	NumberOfFastBalls=0;
	NumberOfMediumBalls=0;
	NumberOfSlowBalls=5;
	DrawString( "Speed of all balls                              slow", 5, 55, 65 );
	NumberOfSmartWorms=5;
	DrawString( "Number of smart worms                              5", 5, 65, 65 );
	NumberOfFastSmartWorms=0;
	NumberOfMediumSmartWorms=0;
	NumberOfSlowSmartWorms=5;
	DrawString( "Speed of all smart worms                        slow", 5, 75, 65 );
	LengthOfSmartWorms=50;
	DrawString( "Length of all smart worms                         50", 5, 85, 65 );
	StartingLevel=1;
	DrawString( "Starting level                                     1", 5, 95, 65 );
	FoodNeedToNextLevel=10;
	DrawString( "Food needed for level advance                     10", 5, 105, 65 );
	SpeedOfGame=16;
	DrawString( "Overall speed of game                             16", 5, 115, 65 );
	DrawString( "Press any key", 5, 193, 65 );
	RandomPalette();
	Pal( 65, 0, 0, 0 );
	while ( !kbhit() )
		PixelDance( );
	getch();
	ClearScreen( 0 );
	// that was pretty simple eh?
}
// asks for the options you want to have in your game *self-explainatory*
void ChangeOptions()
{
	int tmp=0;
	RestorePallette();
	GrabPallette();
	ClearScreen( 0 );
	RandomPalette();

	DrawString( "Enter Number of Players", 1, 1, 65 );
	NumberOfPlayers=GetNumInput( 1, 7 );
	if ( NumberOfPlayers > 2 )
		NumberOfPlayers=2;
	if ( NumberOfPlayers < 1 )
		NumberOfPlayers=1;

	DrawString( "Enter speed of player 1 from 1 to 3", 1, 13, 65 );
	SpeedOfPlayer[0]=GetNumInput( 1, 19 );
	if ( SpeedOfPlayer[0] < 1 )
		SpeedOfPlayer[0] = 1;
	if ( SpeedOfPlayer[0] > 3 )
		SpeedOfPlayer[0] = 3;

	if ( NumberOfPlayers == 2 )
	{
		tmp=12;
		DrawString( "Enter speed of player 2 from 1 to 3", 1, 25, 65 );
		SpeedOfPlayer[1]=GetNumInput( 1, 31 );
		if ( SpeedOfPlayer[1] < 1 )
			SpeedOfPlayer[1] = 1;
		if ( SpeedOfPlayer[1] > 3 )
			SpeedOfPlayer[1] = 3;
	}

	DrawString( "How many balls 0 to 90", 1, 25+tmp, 65 );
	NumberOfBalls=GetNumInput( 1, 31+tmp );

	DrawString( "Change Balls speeds y or n", 1, 37+tmp, 65 );
	GetInputChar( -5, 43+tmp );

	if ( strcmp( istring, "y" ) == -32 )
	{
		back:
		DrawString( "Enter Number Of Slow Balls 0 to 90", 1, 49+tmp, 65 );
		NumberOfSlowBalls=GetNumInput( 1, 55+tmp );

		DrawString( "Enter Number Of Medium Balls 0 to 90", 1, 61+tmp, 65 );
		NumberOfMediumBalls=GetNumInput( 1, 67+tmp );

		DrawString( "Enter Number Of Fast Balls 0 to 90", 1, 73+tmp, 65 );
		NumberOfFastBalls=GetNumInput( 1, 79+tmp );

		if ( NumberOfBalls != (NumberOfFastBalls+NumberOfMediumBalls+NumberOfSlowBalls) )
			strcpy( istring, "" );
		tmp+=36;
	}

	if ( strcmp( istring, "y" ) == -43 )
	{

		NumberOfFastBalls=0;

		NumberOfMediumBalls=0;

		NumberOfSlowBalls=NumberOfBalls;

	}
	DrawString( "How Many Smart Worms 0 to 90", 1, 49+tmp, 65 );
	NumberOfSmartWorms=GetNumInput( 1, 55+tmp );

	if ( NumberOfSmartWorms > 90 )
		NumberOfSmartWorms=90;

	if ( NumberOfSmartWorms < 0 )
		NumberOfSmartWorms=0;

	DrawString( "Change Worms Speeds y or n", 1, 61+tmp, 65 );
	GetInputChar( -5, 67+tmp );

	if ( strcmp( istring, "y" ) == -32 )
	{
		DrawString( "Enter Number Of Slow Smart Worms 0 to 90", 1, 73+tmp, 65 );
		NumberOfSlowSmartWorms=GetNumInput( 1, 79+tmp );

		DrawString( "Enter Number Of Medium Smart Worms 0 to 90", 1, 85+tmp, 65 );
		NumberOfMediumSmartWorms=GetNumInput( 1,91+tmp );

		DrawString( "Enter Number Of Fast Smart Worms 0 to 90", 1, 97+tmp, 65 );
		NumberOfFastSmartWorms=GetNumInput( 1, 103+tmp );

		if ( NumberOfSmartWorms != NumberOfFastSmartWorms+NumberOfMediumSmartWorms+NumberOfSlowSmartWorms )
			strcpy( istring, "" );

		DrawString( "Enter Length of Smart Worms 5 to 90", 1, 109+tmp, 65 );
		LengthOfSmartWorms=GetNumInput( 1, 115+tmp );

		if ( LengthOfSmartWorms < 5 )
			LengthOfSmartWorms=5;

		if ( LengthOfSmartWorms > 90 )
			LengthOfSmartWorms=90;

		tmp+=48;
	}
	if ( strcmp( istring, "y" ) == -43 )
	{

		NumberOfFastSmartWorms=0;

		NumberOfMediumSmartWorms=0;

		LengthOfSmartWorms=10;

		NumberOfSlowSmartWorms=NumberOfSmartWorms;

	}
	StartingLevel=1;

	FoodNeedToNextLevel=10;

	SpeedOfGame=24;

	NumberOfLives=4;
	// if you didnt get that, read the other headers first
}
// WoW! our options are set!
#endif