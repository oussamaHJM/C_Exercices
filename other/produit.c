#include<stdio.h>
#include<conio.h>
int i,j,n,cp,rep,pos;
struct datep
    {
        int a;
        int m;
        int j;
    };
struct produit
    {
        char desg[10];
        int code;
        int pu;
        struct datep dp;
    };
void main()
{
    do
    {printf("donner svp le nombre des produits");
    scanf("%d",&n);
    struct produit t[n];
    for(i=0;i<n;i++)
        {printf("T[%d].desg \n",i);
        scanf("%s",&t[i].desg);
        printf("T[%d].code \n",i);
        scanf("%d",&t[i].code);
        printf("T[%d].pu \n",i);
        scanf("%d",&t[i].pu);
        printf("T[%d].dp.a \n",i);
        scanf("%d",&t[i].dp.a);
        printf("T[%d].dp.a \n",i);
        scanf("%d",&t[i].dp.a);
        }
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(t[i].pu>t[j].pu)
                pos=j;
    printf("le produit le plus cher c'est %s \n",t[pos].desg);
    cp=0;
    for(i=0;i<n;i++)
        if(t[i].dp.a<2013)
            cp++;
        else
        if(t[i].dp.a==2013)
            if (t[i].dp.m<10)
            cp++;
            else
                if(t[i].dp.m==10)
                  if(t[i].dp.j<10)
                      cp++;
    printf("\ne nbre est %d \n",cp);
    printf("si vous voulez rexecuter le programme tapper 1\n");
    scanf("%d",&rep);}
while(rep>=0);
}
