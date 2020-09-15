#include<stdio.h>
float vx(double x,int k)
{
	if(x==0)
	{
		return 1;
	}
	else
	{
		if(k==1)
		{
			return x;
		}
		if(k>1)
		{
			if((k%2)==0)
			{
				return (vx(x,(k/2))*vx(x,(k/2)));
			}
			else
			{
				return (vx(x,(k-1)*x));
			}
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
