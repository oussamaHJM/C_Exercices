#include<stdio.h>
#include<conio.h>
int n,i,j;
struct date
{
      int jj;
      int mm;
      int aa;
};
struct date aux;
void main()
{
        printf("donnez svp le nbr n des date que vous voulez");
        scanf("%d",&n);
        struct date t[n];
    for(i=0;i<n;i++)
    {
        printf("donnet t[",i,"].jour i \n");
        scanf("%d",&t[i].jj);
        printf("donnet t[",i,"].mois i \n");
        scanf("%d",&t[i].mm);
        printf("donnet t[",i,"].année i \n");
        scanf("%d",&t[i].aa);
    }
    for(i=1;i<n-1;i++)
        for(j=i+1;i<n;j++)
            if(t[i].aa>t[j].aa)
            {
                aux=t[i];
                t[i]=t[j];
                t[j]=aux;
            }
            else
                if(t[i].mm>t[j].mm)
                        {aux=t[i];
                        t[i]=t[j];
                        t[j]=aux;}
                else
                    if(t[i].jj>t[j].jj)
                        {aux=t[i];
                        t[i]=t[j];
                        t[j]=aux;}
}
getch();
