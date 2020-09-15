#include<stdio.h>
#include<conio.h>
struct date
{
    int a;
    int m;
    int j;
};
struct heure
{
    int h;
    int m;
    int s;
};
struct place
{
    struct date dt;
    struct heure he;
    struct heure hs;
    int mat;
    int np;
    int prix;
};
struct historique
{
    struct date dt;
    struct heure he;
    struct heure hs;
    int mat;
    int np;
    int prix;
};
void afficher(struct historique f[],int m)
{
    int i;
    for(i=1;i<=m;i++)
    {
        printf("\n h[%d].mat: %d",i,f[i].mat);
        printf("\n h[%d].np: %d",i,f[i].np);
        printf("\n h[%d].he.h: %d",i,f[i].he.s);
        printf("\n h[%d].he.m: %d",i,f[i].he.s);
        printf("\n h[%d].he.s: %d",i,f[i].he.s);
        printf("\n h[%d].hs.h: %d",i,f[i].hs.m);
        printf("\n h[%d].hs.m: %d",i,f[i].hs.m);
        printf("\n h[%d].hs.s: %d",i,f[i].hs.s);
        printf("\n h[%d].prix: %d",i,f[i].prix);
        printf("\n h[%d].dt.a: %d",i,f[i].dt.a);
        printf("\n h[%d].dt.m: %d",i,f[i].dt.m);
        printf("\n h[%d].dt.j: %d",i,f[i].dt.j);

    }
}
void affecter(struct place b[],int m)
{
    int i;
    for(i=1;i<=m;i++)
        if(b[i].mat==0)
        {
            printf("veuillez regagner la place %d \n",i);
                printf("p[%d].mat",i);
                scanf("%d",&b[i].mat);
                b[i].np=i;
                printf("p[%d].he.h",i);
                scanf("%d",&b[i].he.h);
                printf("p[%d].he.m",i);
                scanf("%d",&b[i].he.m);
                printf("p[%d].he.s",i);
                scanf("%d",&b[i].he.s);
                printf("p[%d].dt.a",i);
                scanf("%d",&b[i].dt.a);
                printf("p[%d].dt.m",i);
                scanf("%d",&b[i].dt.m);
                printf("p[%d].dt.j",i);
                scanf("%d",&b[i].dt.j);
                i=3;
            }
}
void libere(struct place b[],int m,struct historique f[],int o)
{
    int i,ma,hee,hss,pr;
    printf("donne la matricule de la voiture");
    scanf("%d",&ma);
    for(i=1;i<=m;i++)
        if(b[i].mat==ma)
        {
            f[o].mat=b[i].mat;
            f[o].np=b[i].np;
            f[o].he.h=b[i].he.h;
            f[o].he.m=b[i].he.m;
            f[o].he.s=b[i].he.s;
            f[o].dt.a=b[i].dt.a;
            f[o].dt.m=b[i].dt.m;
            f[o].dt.j=b[i].dt.j;
            printf("h[%d].hs.h",o);
            scanf("%d",&f[o].hs.h);
            printf("h[%d].hs.m",o);
            scanf("%d",&f[o].hs.m);
            printf("h[%d].hs.s",o);
            scanf("%d",&f[o].hs.s);
            hee=(b[i].he.h*3600)+ (b[i].he.m*60)+b[i].he.s;
            hss=(f[o].hs.h*3600)+ (f[o].hs.m*60)+f[o].hs.s;
            pr=((hss-hee)/3600)*2;
            f[o].prix=pr;
            b[i].mat=0;
            b[i].np=0;
            b[i].he.h=0;
            b[i].he.m=0;
            b[i].he.s=0;
            b[i].hs.h=0;
            b[i].hs.m=0;
            b[i].hs.s=0;
            b[o].dt.a=0;
            b[o].dt.m=0;
            b[o].dt.j=0;
        }
}
void recherche(struct place b[],int m)
{
    int i,k,pl,dr;
    dr=0;
    for(i=1;i<=m;i++)
        if(b[i].mat==0)
        {
            dr=1;
            printf("la place %d est libre",i);
        }
    if(dr==0)
        printf("ya pas de place libre");
}
void recherchev(struct historique f[],int o)
{
    int i,an,mo,jr;
    printf("donne la date a la quelle elvihicule se trouvais dans le parking");
    printf("\ndonne annee");
    scanf("%d",&an);
    printf("donne mois");
    scanf("%d",&mo);
    printf("donne jour");
    scanf("%d",&jr);
    for(i=1;i<o;i++)
        if((f[i].dt.a==an)&&(f[i].dt.m==mo)&&(f[i].dt.j==jr))
            printf("la voiture de matricule %d occupais la place %d ce jour la",f[i].mat,f[i].np);
}
int n,rep,c;
struct place p[3];
struct historique h[100000];
void main()

{
    n=1;
    do
    {
    printf("\n tape 1 pour l'affichage \n tape 2 pour affecter \n tape 3 pour liberer \n tape 4 pour la recherche de place libre \n tape 5 pour rechercher les voitures en donnant la date \n donne ton choix");
    scanf("%d",&c);
    switch(c)
    {
        case 1: afficher(h,n);break;
        case 2: affecter(p,3);break;
        case 3:
            {
                libere(p,3,h,n);
                n=n+1;
            break;}
        case 4: recherche(p,3);break;
        case 5: recherchev(h,n);break;
        default : printf("1111111111");
    }
    printf("\ntape 1 pour recommencer");
    scanf("%d",&rep);
    }
    while(rep==1);
    getch();
}


