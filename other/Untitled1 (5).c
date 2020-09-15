#include<stdio.h>
#include<conio.h>
int M[20][20],N[20][20],S[20][20];
int i,j,p,l,c;
void main()
{
	printf("donner le nombre de ligne\n");
	scanf("%d",&l);
	printf("donner le nombre des colones\n");
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
			printf("donner N[%d][%d]\n",i,j);
			scanf("%d",&N[i][j]);
		}
	}
	printf("\n la somme des deux matrice :\n");
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			S[i][j]=M[i][j]+N[i][j];
		}
	}
	printf("la somme est\n ");
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d   ",S[i][j]);
			printf("\n");
		}
	}
	getch();
}
