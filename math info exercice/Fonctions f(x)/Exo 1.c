#include<stdio.h>
#include<math.h>
#include<conio.h>
float f(float x)
{
    float r;
    r=(x*x)-1;
    return r;
}
main()
{
    float a,n,b,pas,p,q;
    int drp,i;
    printf("Donne a\n");
    scanf("%f",&a);
    printf("Donne b\n");
    scanf("%f",&b);
     printf("Donne degre de precision \n");
    scanf("%f",&n);
    pas=(b-a)/n;
    i=0;
    drp=0;
    do
    {
        p=f(a+i*pas);
        q=f(a+(i+1)*pas);
        if(q==0)
           {
                printf("%f est un zero\n",a+(i+1)*pas);
                drp=1;
           }
        else
            if((p*q)<0)
               {
                 drp=1;
                 printf("%f est un ZERO\n",a+i*pas);
               }
        i++;

    }
        while(i<n);
        if(drp==0)
            printf("la fonction n'a pas de solution dans [%f,%f]",a,b);
        getch();
}
