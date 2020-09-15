#include<stdio.h>
int fact_itr(int n)
{
	int fact=n;
	int i;
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		for(i=n-1;i>0;i--)
		{
			fact=fact*i;
		}
		return fact;
	}
}
main()
{
	int n=1;
	while(n>-1)
	{
		printf("entrez un entier ");
		scanf("%d",&n);
		printf("%d != %d\n",n,fact_itr(n));
	}
}
