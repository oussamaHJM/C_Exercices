#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,n,nb,j,c,drp,ch;

struct module
{
    int coef;
    int code;
    char nom[10];
    int VH;
};
struct module T[20],aux;
void main()
{

        do
        {
            printf("Donnez n\n");
            scanf("%d",&n);
        }
        while((n<0) || (n>=20));
        for(i=0;i<n;i++)
        {
            printf("T[%d].code ",i);
            scanf("%d",&T[i].code);
            printf("T[%d].nom ",i);
            scanf("%s",&T[i].nom);
            printf("T[%d].coef ",i);
            scanf("%d",&T[i].coef);
            printf("T[%d].VH ",i);
            scanf("%d",&T[i].VH);

        }
        printf("AFFICHAGE DU CONTENU\n");
        for(i=0;i<n;i++)
            {
                printf("\nT[%d].code=%d",i,T[i].code);
                printf("\nT[%d].nom=%s",i,T[i].nom);
                printf("\nT[%d].coef=%d",i,T[i].coef);
                printf("\nT[%d].VH=%d",i,T[i].VH);
            }
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                if(strcmp(T[i].nom,T[j].nom)>0)
                {
                    aux=T[i];
                    T[i]=T[j];
                    T[j]=aux;
                }
        printf("\nAFFICHAGE DU TABLEAU ENCORE\n");
        for(i=0;i<n;i++)
            {
                printf("\nT[%d].code=%d",i,T[i].code);
                printf("\nT[%d].nom=%s",i,T[i].nom);
                printf("\nT[%d].coef=%d",i,T[i].coef);
                printf("\nT[%d].VH=%d",i,T[i].VH);
            }
        for(i=0;i<n;i++)
            if(T[i].VH>=60 & T[i].coef==2)
                printf("\nT[%d].code=%d",i,T[i].code);
        printf("\nDonnez le code a modifier\n");
        scanf("%d",&c);
        drp=0;
        i=0;
         do
            {
                if(T[i].code==c)
                    drp=1;
                i++;
            }
        while((drp==0)&(i<=n));
        if(drp==0)
            printf("Le code existe pas\n");
        else
        {
            printf("Pour modifier nom tapez 1\n");
            printf("Pour modifier coef tapez 1\n");
            printf("Pour modifier VH tapez 1\n");
            printf("Donnez votre choix\n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                    {
                        printf("Donnez le nouveau nom\n");
                        scanf("%s",T[i].nom);
                    break;}
                case 2:
                    {
                        printf("Donnez le nouveau coef\n");
                        scanf("%d",T[i].coef);
                   break;}
                case 3:
                    {
                        printf("Donnez le nouveau VH\n");
                        scanf("%d",T[i].VH);
                    break;}
                default:
                    printf("Choix incorrect\n");
            }
        }
        nb=0;
        for(i=0;i<n;i++)
            if((T[i].coef)==3)
                nb=nb+1;
        printf("\nLe nbre de modules ayant un coefficient egale a 2 est:%d",nb );

}
