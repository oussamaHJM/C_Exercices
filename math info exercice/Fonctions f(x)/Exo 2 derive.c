#include<stdio.h>
#include<math.h>
#include<conio.h>
float f(float x)
{
    float r;
    r=(pow(x,3)*sin(x))*sqrt(x);
    return r;
}
float df(float m,float p)
{
    float s;
    s=(p/2)*(f(m+1/p)-f(m-1/p));
    return s;
}
main()
{
    float p,q,n,r,x0,a,b,pas,z[10];
    int drp,i,k,signe,j;
    printf("Donne a\n");
    scanf("%f",&a);
    printf("Donne b\n");
    scanf("%f",&b);
    printf("Donne degre de precision \n");
    scanf("%f",&n);
    pas=(b-a)/n;
    i=0;
    drp=0;
    k=0;
    do
    {
        p=df(a+i*pas,n);
        q=df(a+(i+1)*pas,n);
        if(q==0)
           {
                printf("%f est un zero\n",a+(i+1)*pas);
                drp=1;
                z[k]=a+(i+1)*pas;
                k++;
           }
        else
            if((p*q)<0)
               {
                 drp=1;
                 printf("%f est un ZERO\n",a+i*pas);
                 z[k]=a+i*pas;
                 k++;
               }
        i++;

    }
    while(i<n);
    if(drp==0)
        printf("la fonction n'a pas de solution dans [%f,%f]",a,b);
    signe=1;
    if(df(a,n)<0)
    {
        printf("f est decroissante sur [%f,%f]\n",a,z[0]);
        signe=-1;
    }
    if(df(a,n)>0)
    {
        printf("f est croissante sur [%f,%f]\n",a,z[0]);
        signe=1;
    }
    for(j=0;j<k;j++)
    {
        if(j==k-1)
            z[k]=b;
        if(signe==-1)
        {
            printf("f est croissante sur [%f,%f]\n",z[j],z[j+1]);
            signe=-signe;
        }
        else
        {
            printf("f est decroissante sur [%f,%f]\n",z[j],z[j+1]);
            signe=-signe;
        }
    }
    getch();
}
