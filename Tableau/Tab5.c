#include<stdio.h>
#include<conio.h>
 int T[20],i,j,aux,r,ch,v,pos,drp,n,nbr;
void main()
{

    do
    {


    printf("Pour ajouter un nombre Tapez 1\n");
    printf("Pour supprimer un element Tapez 2\n");
    printf("Pour afficher le contenu Tapez 3\n");
    printf("Donnez Le Choix \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 3 :
            {
                for(i=0;i<n;i++)
                printf("\n T[%d]=%d",i,T[i]);
        break;}
        case 2 :
            {
                printf("Donnez la valeur a supprimer\n");
                scanf("%d",&v);
                drp=0;
                do
                {
                    pos=0;
                        for(i=0;i<n;i++)
                        if(T[i]==v)
                        {
                            drp=1;
                            pos=i;
                        }
                    if(pos!=0)
                        {
                            for(j=pos;j<n-1;j++)
                                T[j]=T[j+1];
                        n=n-1;
                        }
                }
                while(pos!=0);
                if(drp==0)
                    printf("Element existe pas\n");
                else
                    {
                        for(i=0;i<n;i++)
                            printf("\n T[%d]=%d",i,T[i]);
                    }
        break;}
        case 1:
            {
                printf("Donnez le nbre a ajouter\n T[%d]",i);
                scanf("%d",&T[i]);
                n=n+1;
                i=n-1;
                printf("\n affichage du tableau\n");
                for(i=0;i<n;i++)
                    printf("\n T[%d]=%d",i,T[i]);
        break;}


        }
    printf("Donnez votre reponse\n");
    scanf("%d",&r);
    }
    while(r==1);
 }
