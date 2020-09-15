#ifndef fonts_h
#define fonts_h
// This is how i did the font for the game... a  bit of a not so good way to do
// it, but it'll do, its just a bitmapped type deal, my array is all marked out
// when it draws if it finds a 1, it puts a dot, if not, it doesn't.  pretty simple
// yet very long and teduis to type all out

char istring[50];  // for getting a char input in my font

void GetInputChar( int, int );   // gets a char string and stores it in istring
int GetNumInput( int, int );     // returns a inputed integer
// ahhhh, the hugely gigantic font arghhh...
int font[36][25]={ {  0, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 1, 1, 1, 1, 1,
							 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1 },    // A

						  { 1, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 1, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 1, 1, 1, 1, 0 },    // B

						  { 0, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 0,
							 1, 0, 0, 0, 1,
							 0, 1, 1, 1, 0 },    // C

						  { 1, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1,
							 1, 1, 1, 1, 0 },    // D

						  { 1, 1, 1, 1, 1,
							 1, 0, 0, 0, 0,
							 1, 1, 1, 0, 0,
							 1, 0, 0, 0, 0,
							 1, 1, 1, 1, 1 },    // E

						  { 1, 1, 1, 1, 1,
							 1, 0, 0, 0, 0,
							 1, 1, 1, 0, 0,
							 1, 0, 0, 0, 0,
							 1, 0, 0, 0, 0 },    // F

						  { 0, 1, 1, 1, 1,
							 1, 0, 0, 0, 0,
							 1, 0, 0, 1, 1,
							 1, 0, 0, 0, 1,
							 0, 1, 1, 1, 0 },    // G

						  { 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1,
							 1, 1, 1, 1, 1,
							 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1 },    // H

						  { 1, 1, 1, 1, 1,
							 0, 0, 1, 0, 0,
							 0, 0, 1, 0, 0,
							 0, 0, 1, 0, 0,
							 1, 1, 1, 1, 1 },    // I

						  { 1, 1, 1, 1, 1,
							 0, 0, 1, 0, 0,
							 0, 0, 1, 0, 0,
							 1, 0, 1, 0, 0,
							 0, 1, 0, 0, 0 },    // J

						  { 1, 0, 0, 1, 0,
							 1, 0, 1, 0, 0,
							 1, 1, 0, 0, 0,
							 1, 0, 1, 0, 0,
							 1, 0, 0, 1, 0 },    // K

						  { 1, 0, 0, 0, 0,
							 1, 0, 0, 0, 0,
							 1, 0, 0, 0, 0,
							 1, 0, 0, 0, 0,
							 1, 1, 1, 1, 1 },    // L

						  { 1, 0, 0, 0, 1,
							 1, 1, 0, 1, 1,
							 1, 0, 1, 0, 1,
							 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1 },    // M

						  { 1, 0, 0, 0, 1,
							 1, 1, 0, 0, 1,
							 1, 0, 1, 0, 1,
							 1, 0, 0, 1, 1,
							 1, 0, 0, 0, 1 },    // N

						  { 0, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1,
							 0, 1, 1, 1, 0 },    // O

						  { 1, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 1, 1, 1, 1, 0,
							 1, 0, 0, 0, 0,
							 1, 0, 0, 0, 0 },    // P

						  { 0, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 1, 0, 1, 0, 1,
							 1, 0, 0, 1, 1,
							 0, 1, 1, 1, 1 },    // Q

						  { 1, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 1, 1, 1, 1, 0,
							 1, 0, 1, 0, 0,
							 1, 0, 0, 1, 0 },    // R

						  { 0, 1, 1, 1, 1,
							 1, 0, 0, 0, 0,
							 0, 1, 1, 1, 0,
							 0, 0, 0, 0, 1,
							 1, 1, 1, 1, 0 },    // S

						  { 1, 1, 1, 1, 1,
							 0, 0, 1, 0, 0,
							 0, 0, 1, 0, 0,
							 0, 0, 1, 0, 0,
							 0, 0, 1, 0, 0 },    // T

						  { 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1,
							 0, 1, 1, 1, 0 },    // U

						  { 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1,
							 0, 1, 0, 1, 0,
							 0, 1, 0, 1, 0,
							 0, 0, 1, 0, 0 },    // V

						  { 1, 0, 0, 0, 1,
							 1, 0, 0, 0, 1,
							 1, 0, 1, 0, 1,
							 1, 1, 0, 1, 1,
							 1, 0, 0, 0, 1 },    // W

						  { 1, 0, 0, 0, 1,
							 0, 1, 0, 1, 0,
							 0, 0, 1, 0, 0,
							 0, 1, 0, 1, 0,
							 1, 0, 0, 0, 1 },    // X

						  { 1, 0, 0, 0, 1,
							 0, 1, 0, 1, 0,
							 0, 0, 1, 0, 0,
							 0, 0, 1, 0, 0,
							 0, 0, 1, 0, 0 },    // Y

						  { 1, 1, 1, 1, 1,
							 0, 0, 0, 1, 0,
							 0, 0, 1, 0, 0,
							 0, 1, 0, 0, 0,
							 1, 1, 1, 1, 1 },    // Z

						  { 0, 0, 1, 0, 0,
							 0, 1, 1, 0, 0,
							 0, 0, 1, 0, 0,
							 0, 0, 1, 0, 0,
							 0, 1, 1, 1, 0 },    // 1

						  { 0, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 0, 0, 1, 1, 0,
							 0, 1, 0, 0, 0,
							 1, 1, 1, 1, 1 },    // 2

						  { 0, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 0, 0, 1, 1, 1,
							 1, 0, 0, 0, 1,
							 0, 1, 1, 1, 0 },    // 3

						  { 1, 0, 0, 1, 0,
							 1, 0, 0, 1, 0,
							 1, 1, 1, 1, 1,
							 0, 0, 0, 1, 0,
							 0, 0, 0, 1, 0 },    // 4

						  { 1, 1, 1, 1, 1,
							 1, 0, 0, 0, 0,
							 1, 1, 1, 1, 0,
							 0, 0, 0, 0, 1,
							 1, 1, 1, 1, 0 },    // 5

						  { 0, 1, 1, 1, 1,
							 1, 0, 0, 0, 0,
							 1, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 0, 1, 1, 1, 0 },    // 6

						  { 1, 1, 1, 1, 1,
							 0, 0, 0, 0, 1,
							 0, 0, 0, 1, 0,
							 0, 0, 1, 0, 0,
							 0, 0, 1, 0, 0 },    // 7

						  { 0, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 0, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 0, 1, 1, 1, 0 },    // 8

						  { 0, 1, 1, 1, 0,
							 1, 0, 0, 0, 1,
							 0, 1, 1, 1, 1,
							 0, 0, 0, 0, 1,
							 1, 1, 1, 1, 0 },    // 9

						  { 0, 1, 1, 1, 0,
							 1, 1, 0, 0, 1,
							 1, 0, 1, 0, 1,
							 1, 0, 0, 1, 1,
							 0, 1, 1, 1, 0 } };  // 0

// This function draws the letter num at x, y, in color color
void Drawletter( int num, int x, int y, int color ) {
	int tmpx, tmpy;     // temporary x and y values
	tmpx = x;
	tmpy = y;

	for (int drawit = 0; drawit < 25; drawit++ )  // 25 dots for each letter max
	{
		if ( font[num][drawit] == 1 )
		{            										 // if theres a 1
			PutPixel( tmpx, tmpy, color );          // put a dot
		}
																 // moves right 1
		tmpx++;

		if ( tmpx == x + 5 )
		{                						          // if the line is done
			tmpy++;                                 // add 1 to y, and make x
			tmpx=x;                                 // back to its original
		}
	}
}
// This function will draw a string in my font at x, y, in color color;

void DrawString( char string[], int x, int y, int color )
{

	int sizeofword = strlen( string );    // gets the length of the string

	for (int length=0; length < sizeofword; length++)   // loops through each letter
	{
		switch( string[length] )                         // and draws it
		{
			case 'a':
			case 'A':
				Drawletter( 0, x, y, color );
				break;
			case 'b':
			case 'B':
				Drawletter( 1, x, y, color  );
				break;
			case 'c':
			case 'C':
				Drawletter( 2, x, y, color  );
				break;
			case 'd':
			case 'D':
				Drawletter( 3, x, y, color  );
				break;
			case 'e':
			case 'E':
				Drawletter( 4, x, y, color  );
				break;
			case 'f':
			case 'F':
				Drawletter( 5, x, y, color  );
				break;
			case 'g':
			case 'G':
				Drawletter( 6, x, y, color  );
				break;
			case 'h':
			case 'H':
				Drawletter( 7, x, y, color  );
				break;
			case 'i':
			case 'I':
				Drawletter( 8, x, y, color  );
				break;
			case 'j':
			case 'J':
				Drawletter( 9, x, y, color  );
				break;
			case 'k':
			case 'K':
				Drawletter( 10, x, y, color  );
				break;
			case 'l':
			case 'L':
				Drawletter( 11, x, y, color  );
				break;
			case 'm':
			case 'M':
				Drawletter( 12, x, y, color  );
				break;
			case 'n':
			case 'N':
				Drawletter( 13, x, y, color  );
				break;
			case 'o':
			case 'O':
				Drawletter( 14, x, y, color  );
				break;
			case 'p':
			case 'P':
				Drawletter( 15, x, y, color  );
				break;
			case 'q':
			case 'Q':
				Drawletter( 16, x, y, color  );
				break;
			case 'r':
			case 'R':
				Drawletter( 17, x, y, color  );
				break;
			case 's':
			case 'S':
				Drawletter( 18, x, y, color  );
				break;
			case 'T':
			case 't':
				Drawletter( 19, x, y, color  );
				break;
			case 'u':
			case 'U':
				Drawletter( 20, x, y, color  );
				break;
			case 'v':
			case 'V':
				Drawletter( 21, x, y, color  );
				break;
			case 'w':
			case 'W':
				Drawletter( 22, x, y, color  );
				break;
			case 'x':
			case 'X':
				Drawletter( 23, x, y, color  );
				break;
			case 'y':
			case 'Y':
				Drawletter( 24, x, y, color  );
				break;
			case 'z':
			case 'Z':
				Drawletter( 25, x, y, color  );
				break;
			case '1':                            // numbers too
				Drawletter( 26, x, y, color );
				break;
			case '2':
				Drawletter( 27, x, y, color );
				break;
			case '3':
				Drawletter( 28, x, y, color );
				break;
			case '4':
				Drawletter( 29, x, y, color );
				break;
			case '5':
				Drawletter( 30, x, y, color );
				break;
			case '6':
				Drawletter( 31, x, y, color );
				break;
			case '7':
				Drawletter( 32, x, y, color );
				break;
			case '8':
				Drawletter( 33, x, y, color );
				break;
			case '9':
				Drawletter( 34, x, y, color );
				break;
			case '0':
				Drawletter( 35, x, y, color );
				break;
			case ' ':
				break;
		}   // end of switch
		x=x+6;               // moves over 6 because the size of each letter is 5x5
		if ( x > 320 ) {     // if it goes over the screen make x = 0 and y+=6
			x=1;              // so it looks better
			y=y+6;
		}
	}  // end of for
}
// This Function gets input and shows it in my font
void GetInputChar( int sx, int sy )
{
	int keyb;           // if a key is hit
	int color=65;       // the color
	int letter=-1;      // the letter we are on
	Pal( 65, 0, 0, 0 ); // make color 65 black
	int x=sx;
	int y=sy;
	strcpy( istring, "" );   // clear out istring
	while ( keyb != SCAN_ENTER )  // get characters while enter isnt hit
	{
		PixelDance();
		keyb=Get_Scan_Code();      // test for key hit
		if ( keyb > 0 )            // if it is hit, goto next letter, and move x over
		{
			letter++;
			x+=6;
		}
		switch( keyb )            // based on what key they hit, print that letter
		{                         // and add it to the end of istring
			case SCAN_A:
				Drawletter( 0, x, y, color );
				strcat( istring, "A" );
				break;
			case SCAN_B:
				Drawletter( 1, x, y, color  );
				strcat( istring, "B" );
				break;
			case SCAN_C:
				Drawletter( 2, x, y, color  );
				strcat( istring, "C" );
				break;
			case SCAN_D:
				Drawletter( 3, x, y, color  );
				strcat( istring, "D" );
				break;
			case SCAN_E:
				Drawletter( 4, x, y, color  );
				strcat( istring, "E" );
				break;
			case SCAN_F:
				Drawletter( 5, x, y, color  );
				strcat( istring, "F" );
				break;
			case SCAN_G:
				Drawletter( 6, x, y, color  );
				strcat( istring, "G" );
				break;
			case SCAN_H:
				Drawletter( 7, x, y, color  );
				strcat( istring, "H" );
				break;
			case SCAN_I:
				Drawletter( 8, x, y, color  );
				strcat( istring, "I" );
				break;
			case SCAN_J:
				Drawletter( 9, x, y, color  );
				strcat( istring, "J" );
				break;
			case SCAN_K:
				Drawletter( 10, x, y, color  );
				strcat( istring, "K" );
				break;
			case SCAN_L:
				Drawletter( 11, x, y, color  );
				strcat( istring, "L" );
				break;
			case SCAN_M:
				Drawletter( 12, x, y, color  );
				strcat( istring, "M" );
				break;
			case SCAN_N:
				Drawletter( 13, x, y, color  );
				strcat( istring, "N" );
				break;
			case SCAN_O:
				Drawletter( 14, x, y, color  );
				strcat( istring, "O" );
				break;
			case SCAN_P:
				Drawletter( 15, x, y, color  );
				strcat( istring, "P" );
				break;
			case SCAN_Q:
				Drawletter( 16, x, y, color  );
				strcat( istring, "Q" );
				break;
			case SCAN_R:
				Drawletter( 17, x, y, color  );
				strcat( istring, "R" );
				break;
			case SCAN_S:
				Drawletter( 18, x, y, color  );
				strcat( istring, "S" );
				break;
			case SCAN_T:
				Drawletter( 19, x, y, color  );
				strcat( istring, "T" );
				break;
			case SCAN_U:
				Drawletter( 20, x, y, color  );
				strcat( istring, "U" );
				break;
			case SCAN_V:
				Drawletter( 21, x, y, color  );
				strcat( istring, "V" );
				break;
			case SCAN_W:
				Drawletter( 22, x, y, color  );
				strcat( istring, "W" );
				break;
			case SCAN_X:
				Drawletter( 23, x, y, color  );
				strcat( istring, "X" );
				break;
			case SCAN_Y:
				Drawletter( 24, x, y, color  );
				strcat( istring, "Y" );
				break;
			case SCAN_Z:
				Drawletter( 25, x, y, color  );
				strcat( istring, "Z" );
				break;
			case SCAN_1:
				Drawletter( 26, x, y, color );
				strcat( istring, "1" );
				break;
			case SCAN_2:
				Drawletter( 27, x, y, color );
				strcat( istring, "2" );
				break;
			case SCAN_3:
				Drawletter( 28, x, y, color );
				strcat( istring, "3" );
				break;
			case SCAN_4:
				Drawletter( 29, x, y, color );
				strcat( istring, "4" );
				break;
			case SCAN_5:
				Drawletter( 30, x, y, color );
				strcat( istring, "5" );
				break;
			case SCAN_6:
				Drawletter( 31, x, y, color );
				strcat( istring, "6" );
				break;
			case SCAN_7:
				Drawletter( 32, x, y, color );
				strcat( istring, "7" );
				break;
			case SCAN_8:
				Drawletter( 33, x, y, color );
				strcat( istring, "8" );
				break;
			case SCAN_9:
				Drawletter( 34, x, y, color );
				strcat( istring, "9" );
				break;
			case SCAN_0:
				Drawletter( 35, x, y, color );
				strcat( istring, "0" );
				break;
			case SCAN_SPACE:
				Drawletter( 36, x, y, color );
				strcat( istring, "_" );
				break;
			case SCAN_BKSP:        // if backspace is hit, erase it
				letter=-1;
				DrawString( istring, sx+6, sy, 60 );
				x=sx;
				y=sy;
				strcpy( istring, "" );
				break;
		}
	}
}
// same as getchariinput, but for a integer
int GetNumInput( int sx, int sy )
{
	int keyb;
	Pal( 65, 0, 0, 0 );
	int x=sx;
	int y=sy;
	char tmpchar[5]={0};
	while ( keyb!=SCAN_ENTER )
	{
		PixelDance();
		keyb = Get_Scan_Code();
		if ( keyb > 0 )
		{
			switch( keyb )
			{
				case SCAN_1:
					Drawletter( 26, x, y, 65 );
					strcat( tmpchar, "1" );
					break;
				case SCAN_2:
					Drawletter( 27, x, y, 65 );
					strcat( tmpchar, "2" );
					break;
				case SCAN_3:
					Drawletter( 28, x, y, 65 );
					strcat( tmpchar, "3" );
					break;
				case SCAN_4:
					Drawletter( 29, x, y, 65 );
					strcat( tmpchar, "4" );
					break;
				case SCAN_5:
					Drawletter( 30, x, y, 65 );
					strcat( tmpchar, "5" );
					break;
				case SCAN_6:
					Drawletter( 31, x, y, 65 );
					strcat( tmpchar, "6" );
					break;
				case SCAN_7:
					Drawletter( 32, x, y, 65 );
					strcat( tmpchar, "7" );
					break;
				case SCAN_8:
					Drawletter( 33, x, y, 65 );
					strcat( tmpchar, "8" );
					break;
				case SCAN_9:
					Drawletter( 34, x, y, 65 );
					strcat( tmpchar, "9" );
					break;
				case SCAN_0:
					Drawletter( 35, x, y, 65 );
					strcat( tmpchar, "0" );
					break;
			}  // end of switch
			x+=6;
		}     // end of if
	}        // end of while
	return atoi( tmpchar );
}
// wow, 648 lines of pure boredom finished! hooray!
#endif
