#include<stdio.h>
#include<conio.h>
#include<math.h>
int i,n,nb,j,r;
struct date
{
    int jj;
    int mm;
    int aa;
};

struct PC
{
    char code;
    float DD;
    float pu;
    int M;
};
struct Vente
{
    char code ;
    int code;
struct  date D;
};
struct PC T[200];
struct Vente T[100];
void main()
{
    do
    {
        do
        {
            printf("Donnez n pour les Pcs\n");
            scanf("%d",&n);
        }
        while((n<+0) || (n>=200));

        for(i=0;i<n;i++)
        {
            printf("T[%d].code ",i);
            scanf("%s",&T[i].code);
            printf("T[%d].DD ",i);
            scanf("%d",&T[i].code);

        for(i=0;i<n;i++)
        {
            printf("T[%d].code ",i);
            scanf("%s",&T[i].code);
            printf("T[%d].code ",i);
            scanf("%d",&T[i].code);
            printf("T[%d].DD ",i);
            scanf("%f",&T[i].DD);
            printf("T[%d].pu ",i);
            scanf("%f",&T[i].pu);
        while((T[i].HD.m<0) || (T[i].HD.m>59) || (T[i].HD.h<0)||(T[i].HD.h>23));

        }
        for(i=0;i<n;i++)
            {
                printf("\nT[%d].code=%d",i,T[i].code);
                printf("\nT[%d].pu=%f",i,T[i].pu);
                printf("\nT[%d].h=%d",i,T[i].HD.h);
                printf("\nT[%d].m=%d",i,T[i].HD.m);
                printf("\nT[%d].h=%d",i,T[i].HA.h);
                printf("\nT[%d].m=%d",i,T[i].HA.m);

            }
