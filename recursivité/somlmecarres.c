#include<stdio.h>
int n;
int sommecarrers(int n)
{
	int smrs=n*n;
	if(n>0)
	{
		return smrs+sommecarrers(n-1);
	}
}
void main()
{
	printf("donner  un entier \n");
	scanf("%d",&n);
	printf("le resulta est: %d \n",sommecarrers(n));
}
