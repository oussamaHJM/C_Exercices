#include<stdio.h>
#include<conio.h>
int i,n,nb,j,pos,r;
float maxi;
struct date
{
    int jj;
    int mm;
    int aa;
};
struct produit
{
    float pu;
    int code;
    char desg[10];
struct  date dP;
};
struct produit T[20];
void main()
{
    do
    {
        do
        {
            printf("Donnez n\n");
            scanf("%d",&n);
        }
        while((n<0) || (n>=20));
        for(i=0;i<n;i++)
        {
            printf("T[%d].desg ",i);
            scanf("%s",&T[i].desg);
            printf("T[%d].code ",i);
            scanf("%d",&T[i].code);
            printf("T[%d].pu ",i);
            scanf("%f",&T[i].pu);
        do
        {
            printf("T[%d].jj ",i);
            scanf("%d",&T[i].dP.jj);
            printf("T[%d].mm ",i);
            scanf("%d",&T[i].dP.mm);
            printf("T[%d].aa ",i);
            scanf("%d",&T[i].dP.aa);
        }
            while((T[i].dP.jj<=0) || (T[i].dP.jj>31)|| (T[i].dP.mm<=0) || (T[i].dP.mm>12) || (T[i].dP.aa<=0));
        }
        printf("AFFICHAGE DU CONTENU\n");
        for(i=0;i<n;i++)
            {
                printf("\nT[%d].code=%d",i,T[i].code);
                printf("\nT[%d].pu=%f",i,T[i].pu);
                printf("\nT[%d].jj=%d",i,T[i].dP.jj);
                printf("\nT[%d].mm=%d",i,T[i].dP.mm);
                printf("\nT[%d].aa=%d",i,T[i].dP.aa);
                printf("\nT[%d].desg=%s",i,T[i].desg);
            }
            maxi=T[0].pu;
        for(i=0;i<n;i++)
            if(T[i].pu>maxi)
                maxi=T[i].pu;
                pos=i;
        printf("Le produit le plus cher est",T[pos].desg);
        nb=0;
        for(i=0;i<n;i++)
            if(T[i].dP.aa<2013)
                nb=nb+1;
            else
            {
                if(T[i].dP.aa==2013)
                    if(T[i].dP.mm<10)
                        nb=nb+1;
                    else
                    {
                        if(T[i].dP.mm==10)
                            if(T[i].dP.jj<10)
                            nb=nb+1;
                    }
            }
        printf("Donnez votre reponse\n");
        scand("%d",&r);
    }
    while(r==1);
}
