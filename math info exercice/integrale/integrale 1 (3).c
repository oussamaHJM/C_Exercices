#include<stdio.h>
#include<math.h>
float a,b,pas;
int n,i;
float f(float x)
{
	float r;
	r=(x*x)-1;
    return r;
}
main()
{
    printf("Donne a\n");
    scanf("%f",&a);
    printf("Donne b\n");
    scanf("%f",&b);
     printf("Donne degre de precision \n");
    scanf("%d",&n);
    pas=(abs(a-b))/n;
    i=0;
    do
    {
        if((f(a+i*pas)*(f(a+(i+1)*a)))<0)
            printf("%f est solution",a+i*pas);
        i++;
    }
    while(i<n);
}
