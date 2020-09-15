#include<stdio.h>
#include<conio.h>
int i,j,k,r,s,m,n,l,c,p,d,t[20][20];
main()
{
	printf("donner la valeur de n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<(i+1);j++)
		{
			if(i==j)
			t[i][j]=1;
			else
			t[i][j]=t[i-1][j]+t[i-1][j-1];
		}
	}

	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<i+1;j++)
		{
			printf("%d   ",t[i][j]);
		}
	}
	printf("\n");
}
