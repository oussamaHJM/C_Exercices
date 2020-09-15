#include<stdio.h>
main()
{
	double a=4,b=8;
	double *p1,*p2;
	p1=&a;
	p2=p1+1;
	printf("a=%f	&a=%f	\nb=%f	&b=%f	\np1=%f	*p1=%f		&p1=%f	\np2=%f	*p2=%f	&p2=fl\n",a,&a,b,&b,p1,*p1,&p1,p2,*p2,&p2);
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(double));
	printf("%d\n",sizeof(char));
}
