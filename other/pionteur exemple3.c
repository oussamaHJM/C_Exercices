#include<stdio.h>
main()
{
	int a=4;
	int b=8;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	*p1=*p2;
	printf("a=%d	&a=%d	b=%d	&b=%d	p1=%d	*p1=%d	&p1=%d	p2=%d	*p2=%d	&p2=%d",a,&a,b,&b,p1,*p1,&p1,p2,*p2,&p2);
}
