#include<stdio.h>
#include<conio.h>
struct billet
{
    int code;
    int np;
    float pdb;
    float pv;
    float pb;
    int nv;
};
void ajout(struct billet b[], int *m)
{
    int i;
    *m=*m+1;
    i=*m;
    {
        printf("t[%d].code: ",i);
        scanf("%d",&b[i].code);
        printf("t[%d].np: ",i);
        scanf("%d",&b[i].np);
        printf("t[%d].pdb: ",i);
        scanf("%f",&b[i].pdb);
        printf("t[%d].pv: ",i);
        scanf("%f",&b[i].pv);
        printf("t[%d].pb: ",i);
        scanf("%f",&b[i].pb);
        printf("t[%d].nv: ",i);
        scanf("%d",&b[i].nv);
    }
}
void modification(struct billet b[], int m)
{
    int i,cd;
    printf("donne la code du billet a modifier");
    scanf("%d",&cd);
    for(i=0;i<m;i++)
        if(b[i].code==cd)
            {
                printf("t[%d].code: ",i);
                scanf("%d",&b[i].code);
                printf("t[%d].np: ",i);
                scanf("%d",&b[i].np);
                printf("t[%d].pdb: ",&i);
                scanf("%f",&b[i].pdb);
                printf("t[%d].pv: ",i);
                scanf("%f",&b[i].pv);
                printf("t[%d].pb: ",i);
                scanf("%f",&b[i].pb);
                printf("t[%d].nv: ",i);
                scanf("%d",&b[i].nv);;
            }
}
void suppression(struct billet b[],int *m)
{
    int pos,i,k,drp,cd,rep;
    printf("donne la code du billet a modifier");
    scanf("%d",&cd);
    drp=0;
    do
    {
        pos=-1;
        for(i=0;i<=*m;i++)
            if(b[i].code==cd)
                pos=i;drp=1;
        if(pos!=-1)
        {
            printf("tape 1 pour confirmer la suppression");
            scanf("%d",&rep);
            if(rep==1)
            {
                for(i=pos;i<*m;i++)
                    b[i]=b[i+1];
            *m=*m-1;
            }
        }
    if(drp==0)
        printf("le code est incorrecte");
    }
    while(pos!=-1);
}
void aff(struct billet b[],int m)
{
    int i;
    for(i=0;i<=m;i++)
    {
        printf("\n t[%d].code: %d",i,b[i].code);
        printf("\n t[%d].np: %d",i,b[i].np);
        printf("\n t[%d].pdb: %f",i,b[i].pdb);
        printf("\n t[%d].pv: %f",i,b[i].pv);
        printf("\n t[%d].pb: %f",i,b[i].pb);
        printf("\n t[%d].nv: %d",i,b[i].nv);
    }
}
void somme(struct billet b[],int m)
{
    int i,c,k,rep;
    float  spv,spb;
    printf("tape 1 pour la somme des prix de voyages \n tape 2 pour la somme des prix de bagage \n");
    scanf("%d",&rep);
    switch(rep)
    {
    case 1:
        {
            spv=0;
            for(i=0;i<=m;i++)
                spv=spv+b[i].pv;
            printf("le somme des prix de voyage est %f",spv);
        break;}
    case 2:
        {
            spb=0;
            for(i=0;i<=m;i++)
                spb=spb+b[i].pb;
            printf("le somme des prix de bagage est %f",spb);
        break;}
    default:
        printf("111111111111");
    }
}
int i,c,n,rep;
struct billet t[10000];
void main()

{
    n=-1;
    do
    {
    printf(" \n tape 1 pour l'ajout \n tape 2 pour la podification \n tape 3 pour la supression \n tape 4 pour l'afffichage \n tape 5 pour la somme \ndonne ta reponse");
    scanf("%d",&c);
    switch(c)
    {
    case 1: ajout(t,&n);break;
    case 2: modification(t,n);break;
    case 3: suppression(t,&n);break;
    case 4: aff(t,n);break;
    case 5: somme(t,n);break;
    default :
        printf("1111111111");

    scanf("%d",&rep);
    }
    while(rep==1);
    }
