#include<stdio.h>
#include<math.h>
#include<conio.h>
float x0,x1,pas,a,b,n,p,q,z[10];
int i,signe,j,k,drp=0;
float f(float x)
{
	float r;
	r=(pow(x,3)*sin(x))*sqrt(x);
    return r;
}
float df(float x0,float n)
{
    return (n/2)*(f(x0+(1/n))-f(x0-(1/n)));
}
main()
{
    float r=0;
    printf("Donne degre de precision \n");
    scanf("%f",&n);
    //printf("Donne x0\n");
    //scanf("%f",&x0);
    printf("donner a ");
    scanf("%f",&a);
    printf("donner b");
    scanf("%f",&b);
    //printf("f'(%f)=%f",x0,df(x0,n));
    pas=(b-a)/n;
    i=0;
    do
    {
    	p=df(a+i*pas,n);
    	q=df(a+(i+1)*pas,n);
    	if(q==0)
    		{
                drp=1;
                printf("%f est un zero sur[%f,%f]\n",a+(i+1)*pas,a,b);
                z[k]=a+(i+1)*pas;
                k++;
            }
   		else
   			if((p*q)<0)
       	 		{
                    printf("%f est un zero sur[%f,%f]\n",a+i*pas,a,b);
                    drp=1;
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
        printf("f est décroissante sur[%f,%f]",a,z[0]);
        signe=-1;
    }
    if(df(a,n)>0)
    {
        printf("f est croissante sur[%f,%f]",a,z[0]);
        signe=1;
    }
    for(j=0;j<k;j++)
    {
        if(j==k-1)
            z[k]=b;
        if(signe=-1)
        {
            printf("f est croissante sur[%f,%f]\n",z[j],z[j+1]);
            signe=-signe;
        }
        else
        {
            printf("f est décroissante sur[%f,%f]\n",z[j],z[j+1]);
            signe=-signe;
        }

    }
getch();
}
