#include<stdio.h>
#include<conio.h>
int M[20][20];
int l,c,i,j;
void main()
{
	printf("donner le nombre de lignes \n");
	scanf("%d",&l);
	printf("donner le nombre de colonnes \n");
	scanf("%d",&c);
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("donner M[%d][%d]\n",i,j);
			scanf("%d",&M[i][j]);
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				M[i][j]=0;
			}
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",M[i][j]);
			//printf("\n");
		}
	}
	getch();
}
