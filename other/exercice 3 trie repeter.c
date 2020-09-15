#include<stdio.h>
#include<conio.h>
int i,n,j,rep;
float aux;
void main()
{
    do
        {printf("donner le nombre des cases \n");
        scanf("%d",&n);
        float t[n];
        for(i=0;i<n;i++)
        {
            printf("T[%d] = ",i);
            scanf("%f",&t[i]);
        }
        printf("\n*************\n");
        for(i=0;i<n;i++)
            printf("\n T[%d] = %.2f",i,t[i]);

        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                if(t[i]<t[j])
                    {aux=t[i];
                    t[i]=t[j];
                    t[j]=aux;}
        printf("\n*************\n");
        for(i=0;i<n;i++)
        printf("\n T[%d] = %.2f \n",i,t[i]);

        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                if(t[i]>t[j])
                    {aux=t[i];
                    t[i]=t[j];
                    t[j]=aux;}

        printf("\n*************\n");
        for(i=0;i<n;i++)
        printf("\n T[%d] = %.2f \n",i,t[i]);
        printf("0= rexecuter  1= exit");
        scanf("%d",&rep);}
    while(rep=1);
}
