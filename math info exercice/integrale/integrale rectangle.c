#include<stdio.h>
#include<conio.h>
#include<math.h>
float a,b,p,s,n;
int i,j;
float f(float x)
{
    float r;
    r=(x*x)+2;
    return r;
}
main()
{
	printf("donner la valeur de a	");
	scanf("%f",&a);
	printf("donner la valeur de b	");
	scanf("%f",&b);
	printf("donner la precision n	");
	scanf("%f",&n);
	p=(b-a)/n;
	s=0;
	for(i=0;i<n;i++)
	{
		s=s+(p*f(a+(i*p)));
	}
	printf("l'integrale de fonction f=%f",s);
	getch();
}

