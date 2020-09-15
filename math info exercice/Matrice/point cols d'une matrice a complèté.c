#include<stdio.h>
#include<conio.h>
int A[20][20],max[20],min[20];
int i,j,l,max,c;
void main()
{
	printf("donner le nombre de ligne\n");
	scanf("%d",&l);
	printf("donner le nombre de colone\n");
	scanf("%d",&c);
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("donner A[%d][%d]\n",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			if(max>A[i][j])
			{
				max[i][j]=1;
			}
			else
			{
				max[i][j]=1;
			}
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			if(min>A[i][j])
			{
				max[i][j]=1;
			}
			else
			{
				max[i][j]=1;
			}
		}
	}
}
