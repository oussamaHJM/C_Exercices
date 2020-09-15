#include<stdio.h>
#include<math.h>
int n,i,j,x,y;
float d,ds;
int h[20][20];
void lecture(int h[20][20],int n)
{
	for(i=0;i<n;i++)
	{
		for(j=0;i<2;j++)
		{
			printf("H[%d][%d] ",i,j);
			scanf("%d",&h[i][j]);
		}
	}
}
void affichage(int h[20][20],int n)
{
	for(i=0;i<n;i++)
	{
		for(j=0;i<2;j++)
		{
			printf("H[%d][%d] =%d",i,j,h[i][j]);
		}
	}
}
int pointppch(int x,int y,int h[20][20])
{
    int p;
	d=sqrt(((x-h[0][0])*(x-h[0][0]))+((y-h[0][1])*(y-h[0][1])));
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			ds=sqrt(((x-h[i][j])*(x-h[i][j]))+((y-h[i][j+1])*(y-h[i][j+1])));
			if(ds<d)
			{
				d=ds;
				p=i;
			}
		}
	}
	return p;
}
int tppch(int x,int y,int h[20][20])
{

}
main()
{
	printf("donner le n");
	scanf("%d",&n);
	lecture(h,n);
	affichage(h,n);
	printf("donner le X");
	scanf("%d",&x);
	printf("donner le Y");
	scanf("%d",&y);
	printf("le point le plus proche est %d\n",pointppch(x,y,h));

}
