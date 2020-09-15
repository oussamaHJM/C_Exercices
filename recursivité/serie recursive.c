#include<stdio.h>
int serie(int n)
{
	if(n==0)
	{
		return n;
	}
	else
	{
		if(n==1)
		{
			return n;
		}
		else
		{
			return serie(n-2)+serie(n-1);
		}
	}
}
int n;
void main()
{
	printf("donner  un entier\n");
	scanf("%d",&n);
	printf("le resulta est: %d\n",serie(n));
}
