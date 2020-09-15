#include<stdio.h>
#include<conio.h>
int U[20][20];
int i,j,l,c;
void main()
{
	printf("donner le nombre de lignes\n");
	scanf("%d",&l);
	printf("donner le nombre de colones\n");
	scanf("%d",&c);
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("donner U[%d][%d]\n",i,j);
			scanf("%d",&U[i][j]);
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				U[i][j]=1;
			}
			else
			{
				U[i][j]=0;
			}
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n %d  ",U[i][j]);
			printf("\n");
		}
	}
	getch();
}
