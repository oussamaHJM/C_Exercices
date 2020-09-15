#include<stdio.h>
main()
{
	int a=4;
	int *p;
	p=&a;
	printf("a=%d	&a=%d	p=%d	*p=%d	&p=%d",a,&a,p,*p,&p);
}
