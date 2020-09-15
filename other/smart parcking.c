#include<stdio.h>
#include<conio.h>
#include<string.h>
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
struct op
{
    int cde;
    int mat;
    struct date d;
    struct heure he;
    struct heure hs;
    float prix;
    int ncase;
};
int cde,n;
struct op r[200],h[200];
int i,jk,drp,pos;
void lecture(struct op t[],int n)
{
    for(i=0;i<n;i++)
    {
        printf("\n t[%d].cde  ",i);
        scanf("%d",&t[i].cde);
        printf("\n t[%d].mat  ",i);
        scanf("%d",&t[i].mat);
        printf("\n t[%d].date.a  ",i);
        scanf("%d",&t[i].d.a);
        printf("\n t[%d].date.m  ",i);
        scanf("%d",&t[i].d.m);
        printf("\n t[%d].date.j  ",i);
        scanf("%d",&t[i].d.j);
        printf("\n t[%d].he.h  ",i);
        scanf("%d",&t[i].he.h);
        printf("\n t[%d].he.m  ",i);
        scanf("%d",&t[i].he.m);
        printf("\n t[%d].he.s  ",i);
        scanf("%d",&t[i].he.s);
        printf("\n t[%d].prix  ",i);
        scanf("%f",&t[i].prix);
        printf("\n t[%d].ncase  ",i);
        scanf("%d",&t[i].ncase);
    }
}
void affiche(struct op t[],int n)
{
    for(i=0;i<n;i++)
    {
        printf("\n %d  ",&t[i].cde);
        printf("\n %d  ",&t[i].mat);
        printf("\n %d  ",&t[i].d.a);
        printf("\n %d  ",&t[i].d.m);
        printf("\n %d  ",&t[i].d.j);
        printf("\n %d  ",&t[i].d.a);
        printf("\n %d  ",&t[i].he.h);
        printf("\n %d  ",&t[i].he.m);
        printf("\n %d  ",&t[i].he.s);
        printf("\n %f  ",&t[i].prix);
        printf("\n %d  ",&t[i].ncase);
    }
}
void affectation(struct op t[],int n)
{
    i=0;
    int m;
    pos=-1;
    printf("\n donner le matricule  ");
    scanf("%d",&m);
    do
    {
        if(t[i].mat==0)
        {
            pos=i;
        }
        i=i+1;
    }
    while((i<199)&&(pos==-1));
    if(pos==-1)
        printf("\n pardon pas de place  ");
    else
        {printf("\n veillez regarder la case N_%d  ",pos);
        t[pos].cde=t[pos].cde+1;
        t[pos].mat=m;
        printf("\n donner t[%d].d.a  ",pos);
        scanf("%d",&t[pos].d.a);
        printf("\n donner t[%d].d.m  ",pos);
        scanf("%d",&t[pos].d.m);
        printf("\n donner t[%d].d.j  ",pos);
        scanf("%d",&t[pos].d.j);
        printf("\n donner t[%d].he.h  ",pos);
        scanf("%d",&t[pos].he.h);
        printf("\n donner t[%d].he.m  ",pos);
        scanf("%d",&t[pos].he.m);
        printf("\n donner t[%d].he.s  ",pos);
        scanf("%d",&t[pos].he.s);
        printf("\n donner t[%d].ncase  ",pos);
        scanf("%d",&t[pos].ncase);}
}
void main()
{
    int j,k,c;
    r[0].cde=0;
    printf("\n donner le nombre des cases  ");
    scanf("%d",&n);
    //lecture(r,n);
    do
    {
        printf("\n 1)-affectation    2)-affichage de R    3)-affichage de H    4)-liberation");
        printf("\n donner votre choix  ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            {
                affectation(r,n);
            }break;
        case 2:
            {
                affiche(r,n);
            }break;
        case 3:
            {
                affiche(h,n);
            }break;
        }
        printf("\n tapper 1 pour rexecuter le programme ");
        scanf("%d",&k);
    }
    while(k==1);

}
