#include<stdio.h>
main()
{
	int a=4,b=8;
	int *p1,*p2;
	p1=&a;
	p2=p1+1;
	printf("a=%d	&a=%d	\nb=%d	&b=%d	\np1=%d	*p1=%d		&p1=%d	\np2=%d	*p2=%d	&p2=%d\n",a,&a,b,&b,p1,*p1,&p1,p2,*p2,&p2);
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(double));
	printf("%d\n",sizeof(char));
}
