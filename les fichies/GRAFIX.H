#ifndef grafix_h
#define grafix_h
#define PI 3.14159
// Puts a pixel on the screen really fast
inline PutPixel(int x, int y, unsigned char Col) { memset(vga+x+(y*320),Col,1);return 0; }
// returns color of a pixel at x, y
inline int get_pixel(register int x,register int y) {return vga[(y<<8)+(y<<6)+x];}
float sin_table[360], cos_table[360];
void CreateTable()
{
	for (int index=0; index<360; index++)
		{

		sin_table[index]= sin(index*PI/180);
		cos_table[index] = cos(index*PI/180);

		}
}
// Sets 320x200x256 video mode
void SetVideoMode() {
	 _AX = 0x013;
	 geninterrupt (0x10);
}
// reads the pallette of a color
void GetPal(unsigned char ColorNo, unsigned char &R, unsigned char &G, unsigned char &B)
{
  outp (0x03C7,ColorNo); // here is the pallette color I want read
  R = inp (0x03C9);
  G = inp (0x03C9);
  B = inp (0x03C9);
}
// Sets the pallette of a color
void Pal(unsigned char ColorNo, unsigned char R,
	 unsigned char G,       unsigned char B) {
  outp (0x03C8,ColorNo); // here is the pallette color I want to set
  outp (0x03C9,R);
  outp (0x03C9,G);
  outp (0x03C9,B);
}
// Rids your screen of fuzziness
void WaitRetrace() {
  _DX = 0x03DA;
  l1: asm {
	in  al,dx;
	and al,0x08;
	jnz l1;
		}
  l2: asm {
	in  al,dx;
	and al,0x08;
	jz  l2;
		}
}
// Sets the pallette of a colors to 0, blackening the screen
void Blackout() {
  WaitRetrace();
  for (int loop1=0;loop1<256;loop1++)
	 Pal (loop1,0,0,0);
}
// Grabs the pallette of every pixel on the screen
void GrabPallette() {
  for(int loop1=0;loop1<256;loop1++)
	 GetPal(loop1,Pall2[loop1][0],Pall2[loop1][1],Pall2[loop1][2]);
}
// Fades in the screen  must use grabpallette(), then blackout(), then this
void Fadeup( int speed ) {
//This is temporary storage for the values of a color
unsigned char Tmp[3];
  // A color value for Red, green or blue is 0 to 63, so this loop only
  // need be executed a maximum of 64 times.
  for(int loop1=0;loop1<64;loop1++) {
	 WaitRetrace();
	 delay( speed );
	 for(int loop2=0; loop2<256; loop2++) {
		GetPal(loop2,Tmp[0],Tmp[1],Tmp[2]);
		// If the Red, Green or Blue values of color loop2 are less then they
		// should be, increase them by one.
		if ((Tmp[0] < Pall2[loop2][0]) && (Tmp[0] < 63)) Tmp[0]++;
		if ((Tmp[1] < Pall2[loop2][1]) && (Tmp[1] < 63)) Tmp[1]++;
		if ((Tmp[2] < Pall2[loop2][2]) && (Tmp[2] < 63)) Tmp[2]++;
		// Set the new, altered pallette color.
		Pal (loop2,Tmp[0],Tmp[1],Tmp[2]);
	 }
  }
}
// Fades out the screen
void FadeDown( int speed ) {
// This is temporary storage for the values of a color
unsigned char Tmp[3];
  for(int loop1=0; loop1<64; loop1++) {
	 WaitRetrace();
	 delay( speed );
	 for(int loop2=0; loop2<256; loop2++) {
		GetPal(loop2,Tmp[0],Tmp[1],Tmp[2]);
		// If the Red, Green or Blue values of color loop2 are not yet zero,
		// then, decrease them by one.
		if (Tmp[0] > 0) Tmp[0]--;
		if (Tmp[1] > 0) Tmp[1]--;
		if (Tmp[2] > 0) Tmp[2]--;
		// Set the new, altered pallette color.
		Pal(loop2,Tmp[0],Tmp[1],Tmp[2]);
	 }
  }
}
// Restores the pallette you grabbed with grabpallette()
void RestorePallette() {
  WaitRetrace();
  for(int loop1=0; loop1<255; loop1++)
	 Pal(loop1,Pall2[loop1][0],Pall2[loop1][1],Pall2[loop1][2]);
}
// Don't worry about it
int round (long a) {
  if ( (a - (int)a) < 0.5) return floor(a);
	 else return ceil(a);
}

// Needed for line()
int sgn (long a) {
  if (a > 0) return +1;
  else if (a < 0) return -1;
  else return 0;
}
// Circle
void Circle( int x, int y, int r, int col )
{
	int xo,yo,radius,ang;
	radius = r;
	xo     = x;
	yo     = y;

	for (ang=0; ang<360; ang++)
		{

		x = xo + cos_table[ang]*radius;
		y = yo + sin_table[ang]*radius;

		// plot the point of the circle with a little image space clipping

		if (x>=0 && x<320 && y>=0 && y<200)
			PutPixel(x,y,col);

		} // end for ang
}
// Draws a line from a,b to c,d in color col
void Line(int a, int b, int c, int d, int col) {
  long u,s,v,d1x,d1y,d2x,d2y,m,n;
  int  i;
  u   = c-a;
  v   = d-b;
  d1x = sgn(u);
  d1y = sgn(v);
  d2x = sgn(u);
  d2y = 0;
  m   = abs(u);
  n   = abs(v);
  if (m<=n) {
	 d2x = 0;
	 d2y = sgn(v);
	 m   = abs(v);
	 n   = abs(u);
  }
  s = (int)(m / 2);
  for (i=0;i<round(m);i++) {
	 PutPixel(a,b,col);
	 s += n;
	 if (s >= m) {
		s -= m;
		a += d1x;
		b += d1y;
	 }
	 else {
		a += d2x;
		b += d2y;
	 }
  }
}
// Clears the screen to a specified color
inline ClearScreen( unsigned char Col ) { memset(vga, Col, 0xffff); return 0; }
// Sets colors 0 - 63 shades of the indicated function color
void GrayPalette()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, c, c, c );
}
void BluePalette ()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, 0, 0, c );
}
void RedPalette ()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, c, 0, 0 );
}
void GreenPalette ()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, 0, c, 0 );
}
void PurplePalette ()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, c, 0, c );
}
void MagentaPalette ()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, c, 0, c/2 );
}
void IndigoPalette ()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, c/2, 0, c );
}
void OrangePalette()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, c, c/2, 0 );
}
void YellowPalette()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, c, c, 0 );
}
void TurquiosePalette()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, 0, c, c );
}
void SeaGreenPalette ()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, 0, c, c/2 );
}
void SkyBluePalette ()
{
	for ( int c = 0; c <=63; c++ )
		Pal( c, 0, c/2, c );
}
void RandomPalette()     //  Sets a random palette
{
	switch( rand() % 12 + 1 )
	{
		case 1:
			GrayPalette();
			break;
		case 2:
			BluePalette();
			break;
		case 3:
			RedPalette();
			break;
		case 4:
			GreenPalette();
			break;
		case 5:
			PurplePalette();
			break;
		case 6:
			MagentaPalette();
			break;
		case 7:
			IndigoPalette();
			break;
		case 8:
			OrangePalette();
			break;
		case 9:
			YellowPalette();
			break;
		case 10:
			TurquiosePalette();
			break;
		case 11:
			SeaGreenPalette();
			break;
		case 12:
			SkyBluePalette();
			break;
	}
}
// Sets the colors of the flashing worms
void SetWormsPalette()
{
		for ( int a = 255; a > 235; a-- )
			Pal( a, 0, 0, (63-(255-a))*2 );
		for ( a = 234; a > 214; a-- )
			Pal( a, 0, 63-(234-a)*2, 0 );
		for ( a = 213; a > 193; a-- )
			Pal( a, 63-(213-a)*2, 0, 0 );
		for ( a = 192; a > 172; a-- )
			Pal( a, 63-(192-a)*2, 0, (192-a)*2 );
}
void PixelDance()      // does a pixel dance! actually, randomly places a colored
{                      // pixel here and there for a funky looking interface
	int r1, r2;
	for ( long a = 0; a <= 2000; a++ )
	{
		r1 = rand() % 320;
		r2 = rand() % 200;
		if ( get_pixel( r1, r2 ) != 65 )    // not on color 65, thats my text
			PutPixel( r1, r2, rand() % 31+31  );
	}
}
#endif
