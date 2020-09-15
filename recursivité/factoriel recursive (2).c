#include<stdio.h>
int n;
int fact(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
main()
{
	while(n>=0){
		printf("donner un entier  \n");
		scanf("%d",&n);
		printf("%d!=%d ",n,fact(n));
	}
	
}
