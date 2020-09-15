#include<stdio.h>
void fonction();
void fonction()
{
	int n=10;
	n++;
	printf("apelle numero %d\n",n);
	return;
}
main()
{
	int i;
	for(i=1;i<=3;i++)
		fonction();
}
