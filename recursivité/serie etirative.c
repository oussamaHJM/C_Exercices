#include<stdio.h>
int fibo(int n)
{
	int umoindeux=0;
	int umoinun=1;
	int unouveu;
	int i;
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			unouveu=umoindeux+umoinun;
			umoindeux=umoinun;
			umoinun=unouveu;
		}
		return unouveu;
	}
}
int n;
void main()
{
	printf("donner  un entier\n");
	scanf("%d",&n);
	printf("le resulta est: %d\n",fibo(n));
}
