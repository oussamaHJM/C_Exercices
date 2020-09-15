#include<stdio.h>
int a,b,t;
void main()
{
    a=61;
    b=2;
    printf(" a=%d\n b=%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf(" la nouvelle valeur de a=%d\n la nouvelle valeur de b=%d",a,b);
}

