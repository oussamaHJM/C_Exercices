#include<stdio.h>
int rslt;
int fact(int n)
{
	int i=0;
	for(i=n-1;i>0;i--)
	{
		n*=i;
	}
	return n;
}
main()
{
	int n;
	printf("donner n  ");
	scanf("%d",&n);
	printf("%d != %d\n",n,fact(n));
}
