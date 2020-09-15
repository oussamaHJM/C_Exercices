#include<stdio.h>
int rslt;
int fact(int n)
{
	int i;
	printf("donner n");
	scanf("%d\n",&n);
	for(i=n;i>0;i--)
	{
		rslt=i*(i-1);
	}
	return;
}
main()
{
	printf("%d\n",rslt);
}
