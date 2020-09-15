#include<stdio.h>
#include<conio.h>
#include<math.h>
float a,b,n,pas,p,q;
int i,drp=0;
float f(float x)
{
	float r;
	r=(x*x)+1;
    return r;
}
main()
{
    printf("Donne a\n");
    scanf("%f",&a);
    printf("Donne b\n");
    scanf("%f",&b);
    printf("Donne degre de precision \n");
    scanf("%f",&n);
    pas=(b-a)/n;
    i=0;
    do
    {
    	p=f(a+i*pas);
    	q=f(a+(i+1)*pas);
    	if(q==0)
    		{
			drp=1;
   			printf("%f est un zero\n",a+(i+1)*pas);}
   		else
   			if((p*q)<0)
       	 		{
				printf("%f est un zero\n",a+i*pas);
       	 		drp=1;}
        i++;
    }
    while(i<n);
    if(drp==0)
    	printf("la fonction n'a pas de solution dans [%f,%f]",a,b);
    getch();
}
