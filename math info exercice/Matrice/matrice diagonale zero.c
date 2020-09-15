#include<stdio.h>
int t[50][50];
int i,j,n;
main()
{
	n=0;
	while(n<=0||n>50)
	{
		printf("donner le nombre d'elements n \n");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("donner T[%d][%d] \n",i,j);
			scanf("%d",&t[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%10d ",t[i][j]);	
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				t[i][j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Tab1[%d][%d]=%d \n",i,j,t[i][j]);
		}
	}
}
