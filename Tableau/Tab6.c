#include<stdio.h>
#include<conio.h>
 int T[20],i,j,r,v,pos,drp,n,nbr;
void main()
{
    do
    {
        printf("Donnez n\n");
        scanf("%d",&n);
    }
    while((n<0)||(n>20));
    do
    {
        for(i=0;i<n-1;i++)
        {
            printf("T[%d]",i);
            scanf("%d",&T[i]);
        }
        printf("\n affichage du tableau\n");
        for(i=0;i<n-1;i++)
            printf("\n T[%d]=%d\n",i,T[i]);
        printf("Donnez le nbre a inserer\n ");
        scanf("%d",&v);
        printf("Donnez la position ou vous voulez  inserer\n ");
        scanf("%d",&pos);
        n=n+1;
        i=n-1;
        do
        {
            T[i]=T[i-1];
            i=i-1;
        }
        while(i>=pos+1);
            T[pos]=v;
        printf("\n affichage du tableau\n");
        for(i=0;i<n-1;i++)
            printf("\n T[%d]=%d\n",i,T[i]);

        printf("\nDonnez la valeur a supprimer\n ");
        scanf("%d",&v);
        drp=0;
        do
            {
            pos=0;
                for(i=0;i<n-1;i++)
                    if(T[i]==v)
                        {
                            drp=1;
                            pos=i;
                        }
                    if(pos!=0)
                    {
                        for(j=pos;j<n-2;j++)
                            T[j]=T[j+1];
                        n=n-1;
                    }
            }
            while(pos!=0);
            if(drp==0)
                printf("Element existe pas\n");
                else
                {
                    for(i=0;i<n-1;i++)
                        printf("\n T[%d]=%d",i,T[i]);
                }
    printf("\n affichage du tableau\n");
        for(i=0;i<n-1;i++)
            printf("\n T[%d]=%d",i,T[i]);
printf("\nDonnez votre choix\n");
scanf("%d",&r);
}
while(r==1);
 }
