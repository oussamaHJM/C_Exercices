#include<stdio.h>
int n=10;
void fonction();
void fonction()
{
	int n;
	n++;
	printf("appelle numero %d \n",n);
	return;
}
main()
{
	int i;
		fonction();
		fonction();
}
