#include<stdio.h>
#include<conio.h>
struct patient
{
    int cd;
    char npr;
    int an;
    int nv;
};
void stock(struct patient p[],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("p[%d].cd",i);
        scanf("%d",&p[i].cd);
        printf("p[%d].npr",i);
        scanf("%s",&p[i].npr);
        printf("p[%d].an",i);
        scanf("%d",&p[i].an);
        printf("p[%d].nv",i);
        scanf("%d",&p[i].nv);
    }
}
int compte(struct patient p[],int m)
{
    int nbr,g,i;
    nbr=0;
    for(i=0;i<m;i++)
    {
        g=2016-p[i].an;
        if(g>70)
        nbr=nbr+1;
    }

    return nbr;
}
float facture(int v,int a)
{
    int mt;
    if(v>30)
        mt=100;
    else
        if(v>20)
            mt=300-(300*0.4);
        else
            if(v>15)
                mt=300-(300*0.25);
            else
                if(v>6)
                    mt=300-(300*0.1);
                    else
                        mt=300;
    if((2016-a)>70)
        mt=mt-(300*0.1);
    return mt;
}
float moyenne(struct patient p[],int m)
{
    int s,i,k;
    float moy;
    k=0;
    s=0;
    for(i=0;i<m;i++)
    {
        s=s+facture(p[i].nv,p[i].an);
        k=k+1;
    }
    moy=s/k;
    return moy;
}
struct patient t[100000];
int c,pos,n,code,i;
void main()
{
    printf("donne le nbr de tableau");
    scanf("%d",&n);
    stock(t,n);
    printf("\n tappe 1 pour compter \n taper 2 pour la facture \n tape 3 pour la moyenne \n faite votre choix");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
            printf("le nbr de patient age de plus de 70 ans est :%d",compte(t,n));
        break;}
    case 2:
        {
            printf("donne le code");
            scanf("%d",&code);
            for(i=0;i<n;i++)
                if(t[i].cd==code)
                pos=i;
            printf("la facture est:%f",facture(t[pos].nv,t[pos].an));
        break;}
    case 3:
        {
            printf("la mmoyenne des factures est %f",moyenne(t,n));
        break;}
    default :
        printf("........");
    }
    getch();
}

