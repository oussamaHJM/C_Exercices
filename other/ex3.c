#include<stdio.h>
void f1(void)
{
	printf("bonjour\n");
	return;
}
void f2(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("bonjour \n");
	}
	return;
}
int f3(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("bonjour \n");
	}
	return 0;
}
main()
{
	f1();
	f2(3);
	f3(3);
	
}

