#include<stdio.h>
int rslt;
int fact(int n)
{
	int i;

	for(i=n-1;i>0;i--)
	{
		rslt=rslt*(i-1);
	}
	return;
}
main()
{
	int n;
	printf("donner n");
	scanf("%d\n",&n);
	printf("%d != %d\n",n,rslt);
}
