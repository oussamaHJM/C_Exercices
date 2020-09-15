#ifndef wormai_h
#define wormai_h
#define UP     1
#define DOWN   2
#define LEFT   3
#define RIGHT  4
#define DEAD   1
#define ALIVE  2
struct SMART
{
	int x;   				// x & y locations of the worms' heads
	int y;
	int tailx[100];      // up to 100 tail length
	int taily[100];
	int color;           // the color
	int movement;        // the direction its moving
	int death;           // if it is dead or alive
};
SMART worms[90];   // *grin*
// This function sets new start locations for the worms
void SetSmartWorms( int numai )
{
	for ( int num = 0; num < numai; num++ )
	{
		back:
		worms[num].x=rand()%320;
		worms[num].y=rand()%200;
		if ( get_pixel( worms[num].x, worms[num].y ) )
			goto back;
		worms[num].movement=rand()%4+1;
		worms[num].color=rand()%10+4;
	}
}
// This function draws & does "logic" for the worms
// almost the same as for a player
void DrawSmartWorms( int numai )
{
	for ( int num = 0; num < numai; num++ )
	{
		if ( worms[num].death != DEAD )
		{
			for ( int t = LengthOfSmartWorms; t > -1; t-- )     // sets tail locations
			{
				worms[num].tailx[t+1]=worms[num].tailx[t];
				worms[num].taily[t+1]=worms[num].taily[t];
				// Draws worm
				if ( t > 2 )
					PutPixel( worms[num].tailx[t-2], worms[num].taily[t-2], worms[num].color );
			}

			worms[num].tailx[0]=worms[num].x;
			worms[num].taily[0]=worms[num].y;
			// Puts new location pixel on screen
			PutPixel( worms[num].x, worms[num].y, worms[num].color );
			PutPixel( worms[num].tailx[LengthOfSmartWorms], worms[num].taily[LengthOfSmartWorms], 0 );

			int deathcounter;        // to get out if worm is stuck
			deathcounter=0;
			backmove:
			// moves worm according to its movement status
			if ( worms[num].movement == UP )
				worms[num].y--;
			if ( worms[num].movement == DOWN )
				worms[num].y++;
			if ( worms[num].movement == RIGHT )
				worms[num].x++;
			if ( worms[num].movement == LEFT )
				worms[num].x--;
			// changes movement, or dodges things
			if ( (get_pixel( worms[num].x, worms[num].y )) || ( rand()%LengthOfSmartWorms/2==0 ))
			{
				deathcounter++;
				if (deathcounter >= 30)
				{
					worms[num].movement=5;
					goto deadworm;
				}
				if ( worms[num].movement == UP )
					worms[num].y++;
				if ( worms[num].movement == DOWN )
					worms[num].y--;
				if ( worms[num].movement == RIGHT )
					worms[num].x--;
				if ( worms[num].movement == LEFT )
					worms[num].x++;
				worms[num].movement=( rand()%4 )+1;
					goto backmove;
			}
			deadworm:
		}
	}
}
// that was pretty simple eH?
#endif
