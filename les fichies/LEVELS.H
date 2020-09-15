#ifndef levels_h
#define levels_h
// Ahhhh, the great, well sort of, and glorious levels

// the possible status' of the doors
#define OPENING   1
#define CLOSING   2
#define OPEN      3
#define CLOSED    4
// the directions of the doors
#define HORIZ	   1
#define VERT		2
// sets the defauls status of the doors to OPEN
int doorstatus[50]={3,3,3,3,3,3,3,3,3,3,3,3,3};
int y[50]={0};  // the y locations of doors
int x[50]={0};  // the x locations of doors
int d, b;       // ?????? probably nothing
// draws a door ( look below at the funtion )
void DrawDoor( int, int, int, int, int, int );
// This function draws a level ( no kidding!? ) theres only 6½, add some!!
void DrawLevel( int num )
{
   int c = 4;  // the color of the levels
	switch( num )
	{
		case 1:
			// Outlined Border
			Line( 0, 0, 319, 0, c );
			Line( 319, 0, 319, 199, c );
			Line( 319, 199, 0, 199, c );
			Line( 0, 199, 0, 0, c );

			break;
		case 2:
			// OutLined Border
			Line( 0, 0, 319, 0, c );
			Line( 319, 0, 319, 199, c );
			Line( 319, 199, 0, 199, c );
			Line( 0, 199, 0, 0, c );

			// Line across center
			Line( 80, 100, 240, 100, c );
			// Line down center
			Line( 160, 50, 160, 150, c );

			break;
		case 3:
			// OutLined Border
			Line( 0, 0, 319, 0, c );
			Line( 319, 0, 319, 199, c );
			Line( 319, 199, 0, 199, c );
			Line( 0, 199, 0, 0, c );

			// Some wierd looking line thingies
			Line( 50, 66, 100, 33, c );
			Line( 100, 33, 160, 66, c );

			Line( 220, 33, 270, 66, c );
			Line( 270, 66, 220, 100, c );

			Line( 160, 133, 220, 166, c );
			Line( 220, 166, 270, 133, c );

			Line( 100, 100, 50, 133, c );
			Line( 50, 133, 100, 166, c );
			break;
		case 4:
			// Outlined border
			Line( 0, 0, 319, 0, c );
			Line( 319, 0, 319, 199, c );
			Line( 319, 199, 0, 199, c );
			Line( 0, 199, 0, 0, c );

			Line( 110, 50, 210, 50, c );
			Line( 110, 150, 210, 150, c );

			Line( 110, 50, 110, 55, c );
			Line( 110, 150, 110, 145, c );

			Line( 210, 50, 210, 55, c );
			Line( 210, 150, 210, 145, c );
			// The doors ( look at the funtion below )
			DrawDoor( 90, 110, 55, c, 0, VERT );
			DrawDoor( 90, 210, 55, c, 1, VERT );
			break;
		case 5:
			// Outlined border
			Line( 0, 0, 319, 0, c );
			Line( 319, 0, 319, 199, c );
			Line( 319, 199, 0, 199, c );
			Line( 0, 199, 0, 0, c );

			Line( 50, 50, 50, 75, c );
			Line( 75, 50, 75, 75, c );
			Line( 75, 75, 49, 75, c );
			DrawDoor( 25, 50, 50, c, 2, HORIZ );

			Line( 100, 50, 100, 75, c );
			Line( 125, 50, 125, 75, c );
			Line( 125, 75, 99, 75, c );
			DrawDoor( 25, 100, 50, c, 3, HORIZ );

			Line( 220, 50, 220, 75, c );
			Line( 195, 50, 195, 75, c );
			Line( 220, 75, 194, 75, c );
			DrawDoor( 25, 194, 50, c, 4, HORIZ );

			Line( 270, 50, 270, 75, c );
			Line( 245, 50, 245, 75, c );
			Line( 270, 75, 244, 75, c );
			DrawDoor( 25, 245, 50, c, 5, HORIZ );

			Line( 50, 150, 50, 125, c );
			Line( 75, 150, 75, 125, c );
			Line( 75, 125, 49, 125, c );
			DrawDoor( 25, 50, 150, c, 6, HORIZ );

			Line( 100, 150, 100, 125, c );
			Line( 125, 150, 125, 125, c );
			Line( 125, 125, 99, 125, c );
			DrawDoor( 25, 100, 150, c, 7, HORIZ );

			Line( 220, 150, 220, 125, c );
			Line( 195, 150, 195, 125, c );
			Line( 220, 125, 194, 125, c );
			DrawDoor( 25, 195, 150, c, 8, HORIZ );

			Line( 270, 150, 270, 125, c );
			Line( 245, 150, 245, 125, c );
			Line( 270, 125, 244, 125, c );
			DrawDoor( 25, 245, 150, c, 9, HORIZ );
			break;
		case 6:
			Line( 0, 0, 319, 0, c );
			Line( 319, 0, 319, 199, c );
			Line( 319, 199, 0, 199, c );
			Line( 0, 199, 0, 0, c );

			Line( 64, 0, 64, 120, c );
			Line( 0, 160, 192, 160, c );
			Line( 256, 199, 256, 80, c );
			Line( 319, 40, 128, 40, c );

			Line( 64, 120, 128, 120, c );
			Line( 192, 160, 192, 120, c );
			Line( 256, 80, 192, 80, c );
			Line( 128, 40, 128, 80, c );
			break;
		case 7:
			Line( 0, 0, 319, 0, c );
			Line( 319, 0, 319, 199, c );
			Line( 319, 199, 0, 199, c );
			Line( 0, 199, 0, 0, c );

			Line( 75, 0, 75, 45, c );
			Line( 75, 45, 70, 45, c );
			DrawDoor( 70, 0, 45, c, 10, HORIZ );

			Line( 245, 0, 245, 45, c );
			Line( 245, 45, 250, 45, c );
			DrawDoor( 69, 250, 45, c, 11, HORIZ );
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			Line( 0, 0, 319, 0, c );
			Line( 319, 0, 319, 199, c );
			Line( 319, 199, 0, 199, c );
			Line( 0, 199, 0, 0, c );
			break;
		case 12:
			Line( 0, 0, 319, 0, c );
			Line( 319, 0, 319, 199, c );
			Line( 319, 199, 0, 199, c );
			Line( 0, 199, 0, 0, c );
			break;
		case 13:
			Line( 0, 0, 319, 0, c );
			Line( 319, 0, 319, 199, c );
			Line( 319, 199, 0, 199, c );
			Line( 0, 199, 0, 0, c );
			break;
		case 14:
			Line( 0, 0, 319, 0, 5 );
			Line( 319, 0, 319, 199, 5 );
			Line( 319, 199, 0, 199, 5 );
			Line( 0, 199, 0, 0, 5 );
			break;
		case 15:
			Line( 0, 0, 319, 0, 5 );
			Line( 319, 0, 319, 199, 5 );
			Line( 319, 199, 0, 199, 5 );
			Line( 0, 199, 0, 0, 5 );
			break;
		}
}
// ahhhh, the only piece of info that is of some use...
// This function draws a door, with total size size, at starting locations
// startx, starty, in color color, which is named doornum, which is working in
// a direction direction   CONFUZED???  read on
void DrawDoor( int size, int startx, int starty, int color, int doornum, int direction )
{
	if ( doorstatus[doornum] == CLOSED )   // if the door is CLOSED
	{                                      // it will start OPENING when a random
		if ( rand()%size*2==0 )             // number based on twice its size
			doorstatus[doornum] = OPENING;   // equals 0

		if ( direction == VERT )            // this draws the line of the door HORIZONTALLY
			Line( startx, starty, startx, starty+size, color );

		if ( direction == HORIZ )           // this draws the line of the door VERTICALLY
			Line( startx, starty, startx+size, starty, color );
	}

	if ( doorstatus[doornum] == OPEN )    // if the door is OPEN
	{                                     // it will start CLOSING if
		if ( rand()%size*2==0 )            // a random number based on twice its size
			doorstatus[doornum] = CLOSING;  // equals 0
	}                                     // no need to draw anything

	if ( doorstatus[doornum] == OPENING ) // if the door is OPENING
	{
		if ( direction == VERT )           // and the direction is vertical
		{
			y[doornum]--;                   // it decrements the y location
			if ( y[doornum] == -1 )         // and test is the door has opened fully
			{                               // if it has, the status is changed to
				doorstatus[doornum] = OPEN;  // OPEN
				y[doornum]=0;
			}
		}
		if ( direction == HORIZ )          // if the direction is HORIZONTAL
		{
			x[doornum]--;                   // x is decretmented
			if ( x[doornum] == -1 )         // and tests if it is open
			{                               // if it is, its status changes to
				doorstatus[doornum] = OPEN;  // OPEN
				x[doornum]=0;
			}
		}
		if ( doorstatus[doornum] == OPENING ) // if the door is still opening
		{                                     // after all those detections above
			if ( direction == VERT )           // then it draws the line
			{                                  // in the appropriate size
				PutPixel( startx, starty+y[doornum], 0 );  // and direction
				PutPixel( startx, starty+size-y[doornum], 0 );
			}
			if ( direction == HORIZ )
			{
				PutPixel( startx+x[doornum], starty, 0 );
				PutPixel( startx+size-x[doornum], starty, 0 );
			}
		}
	}
	if ( doorstatus[doornum] == CLOSING ) // ahhh, the hardest one, CLOSING
	{
		if ( direction == VERT )           // if it is vertical
		{
			y[doornum]++;                   // increment y
			// test for objects in way of the door
			// and change status if needed
			if ( get_pixel( startx, starty+y[doornum] ) > 0 || get_pixel( startx, starty+size-y[doornum] ) > 0 )
				doorstatus[doornum] = OPENING;
			// if the door has reached the center i.e closed, status is set to closed
			if ( y[doornum] >= (size/2)+1 )
				doorstatus[doornum] = CLOSED;
		}
		if ( direction == HORIZ ) // if it is horizontal
		{
			x[doornum]++;          // x is incremented
			// tests for objects in the way of the door
			// and changes status if needed
			if ( get_pixel( startx+x[doornum], starty ) > 0 || get_pixel( startx+size-x[doornum], starty ) > 0 )
				doorstatus[doornum] = OPENING;
			// if the door has reached the center, close it
			if ( x[doornum] >= (size/2)+1 )
				doorstatus[doornum] = CLOSED;
		}
		if ( doorstatus[doornum] == CLOSING ) // after all that above detection, if it is still
		{                                     // closing, we draw the lines
			if ( direction == VERT )
			{
				Line( startx, starty, startx, starty+y[doornum], color );
				Line( startx, starty+size, startx, starty+size-y[doornum], color );
			}
			if ( direction == HORIZ )
			{
				Line( startx, starty, startx+x[doornum], starty, color );
				Line( startx+size, starty, startx+size-x[doornum], starty, color );
			}
		}
	}
	// WOW, pretty complicated aint it? still pretty simple if you go over it
}
// Thats all for our level header...
#endif
