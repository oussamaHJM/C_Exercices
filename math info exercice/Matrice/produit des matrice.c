#include<stdio.h>
#include<conio.h>
int M[20][20],N[20][20],p[20][20];
int i,j,k,l,c,h,s;
void main()
{
	printf("donner le nombre de ligne\n");
	scanf("%d",&l);
	printf("donner le nombre de colonne de M et nombre de ligne de N\n");
	scanf("%d",&c);
	printf("donner le nombre des colones\n");
	scanf("%d",&h);
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("donner M[%d][%d]\n",i,j);
			scanf("%d",&M[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("donner N[%d][%d]\n",i,j);
			scanf("%d",&N[i][j]);
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<h;j++)
		{   s=0;
			for(k=0;k<c;k++)
			s=s+M[i][k]*N[k][j];
			p[i][j]=s;
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<h;j++)
			printf("%d   ",p[i][j]);
		printf("\n");				
	}
	}
