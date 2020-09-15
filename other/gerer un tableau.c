#include<stdio.h>
#include<conio.h>
int i,n,ch,p,drp,nc,nbr;
void main()
{
    printf("donner le nombre des cases \n");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++)
    {
        printf("T[%d] = ",i);
        scanf("%d",&t[i]);
    }
    for(i=0;i<n;i++)
        printf("\n T[%d] = %.2d",i,t[i]);
    printf("\n *********************************** \n 2: chercher un nbr 2: inserer un element\n \n 3: modifier un element\n 4: afficher le contenu du tableau \n ******************************** \n");
    scanf("%d",&ch);
    switch(ch)
        {
            case 1:
            printf("\n donner le nombre a chercher");
            scanf("%d",nc);
            for(i=0;i<n;i++)
            {if(nc==t[i])
                {drp=1;
                p=i;}
            else
                drp=0;}
            if(drp==1)
                {printf("le nombre existe a la case nu:%d",p);}
            else
                printf("le nombre n'existe pas");break;
        case 2:
            {printf("\n donner la'element a ajouter \n");
            scanf("%d",&nbr);
            printf("\n donner la position d'element a inserer \n");
            scanf("%d",&p);
            for(i=0;i<n;i++)
                {n=n+1;
                t[p-1]=nbr;break;}}
        case 3:
            {
                printf(  )
            }
        case 4:
            {

            }

}
