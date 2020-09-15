#include<stdio.h>
#include<conio.h>

struct patient
{
    int cd;
    char npr[20];
    int an;
    int nv;
};
void stock(struct patient b[],int p)
{
    int i,j;
    for(i=0;i<p;i++)
    {
        printf("b[%d].cd ",i);
        scanf("%d",&b[i].cd);
        printf("b[%d].npr ",i);
        scanf("%s",&b[i].npr);
        printf("b[%d].an ",i);
        scanf("%d",&b[i].an);
        printf("b[%d].nv ",i);
        scanf("%d",&b[i].nv);
    }
}
int compt(struct patient b[],int p)
{
    int i,nbr,k;
    nbr=0;
    for(i=0;i<p;i++)
    {
        k=2016 - b[i].an;
        if(k>70)
            nbr=nbr+1;
    }
    return nbr;
}
float fact(int v,int a)
{
    int mt,g;
    mt=300;
    g=2016-a;
    if(v>=30 )
        mt=100;
    else
        if(v>=20)
            mt=300-(300*0.4);
        else
            if(v>=15)
            mt=300-(300*0.25);
            else
                if(v>6)
                mt=300-(300*0.1);

   if(g>70)
    mt=mt-(mt*0.10);
   return mt;
}
float moye( patt[])

int i,j,n,c,code,pos;
struct patient t[1000];
void main()
{
    printf("\n donne la valeur de n");
    scanf("%d",&n);
    stock(t,n);
    printf("\n tapez 1 pour comptez \n tapez 2 pour la facture \n faite votre choix");
    scanf("%d",&c);
    //printf("%d",compt(t,n))
    switch(c)
    {
    case 1:
        {
            printf("%d",compt(t,n));
        break;}
    case 2:
        {
            printf("donne le code");
            scanf("%d",&code);
            for(i=0;i<n;i++)
                if(t[i].cd=code)
                pos=i;
            printf("%f",fact(t[pos].nv,t[pos].an));
            break;
        }
    default :
        printf("3333333333333333");
    }








    getch();
}
