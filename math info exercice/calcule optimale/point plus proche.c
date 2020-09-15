#include<stdio.h>
#include<conio.h>
#include<math.h>
int n,i,j,x,y;
int h[20][20];
float d,ds;
void lecture(int h[20][20],int n)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
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
        printf("\n");
        for(j=0;j<2;j++)
            printf("H[%d][%d]=%d\n",i,j,h[i][j]);
    }
}
int pointppch(int x,int y,int h[20][20])
{
	int p;
	d=sqrt(pow((x-h[0][0]),2)+pow((y-h[0][1]),2));
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			ds=sqrt(pow((x-h[i][j]),2)+pow((y-h[i][j+1]),2));
			if(ds<d)
			{
				d=ds;
				p=i;
			}
		}
	}
	return p;
}

float distance(int x,int y,int h[20][20])
{
    float d;

	d=sqrt(pow((x-h[0][0]),2)+pow((y-h[0][1]),2));
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			ds=sqrt(pow((x-h[i][j]),2)+pow((y-h[i][j+1]),2));
			if(ds<d)
			{
				d=ds;
			}
		}
	}
	return d;
}
void tppch(int x,int y,int h[20][20],int n)
{
	int tmp[20][20];
	int p;
	int r[20][20];
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			tmp[i][j]=h[i][j];
		}
	}

	p=pointppch(x,y,tmp);
	r[0][0]=tmp[p][0];
	r[0][1]=tmp[p][1];
	tmp[p][0]=100000;
	tmp[p][1]=100000;


	p=pointppch(x,y,tmp);
	r[1][0]=tmp[p][0];
	r[1][1]=tmp[p][1];
	tmp[p][0]=100000;
	tmp[p][1]=100000;


	p=pointppch(x,y,tmp);
	r[2][0]=tmp[p][0];
	r[2][1]=tmp[p][1];
	tmp[p][0]=100000;
	tmp[p][1]=100000;


	affichage(r,3);
}
main()
{
	printf("donner le nombre des habitans");
	scanf("%d",&n);
	lecture(h,n);
	affichage(h,n);
	printf("donner le X");
	scanf("%d",&x);
	printf("donner le Y");
	scanf("%d",&y);
	printf("le point le plus proche est de NUM%d\n",pointppch(x,y,h));
	printf("le point le plus proche est X=%d  Y=%d\n",h[pointppch(x,y,h)][0],h[pointppch(x,y,h)][1]);
	printf("la distance est %f\n",distance(x,y,h));
	tppch(x,y,h,n);
	getch();
}
