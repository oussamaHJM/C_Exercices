#include<stdio.h>
int carrer(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		return ((carrer(n-1))+(2*n)-1);
	}
}
int n;
void main()
{
	printf("donner  un entier\n");
	scanf("%d",&n);
	printf("le resulta est: %d\n",carrer(n));
}
