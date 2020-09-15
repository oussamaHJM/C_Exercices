#include<stdio.h>//oublier le prix **
#include<conio.h>
#include<math.h>
#include<string.h>

int i,j,n,c,aux,drp,ch,pch,p,nvp,cc;
char naut[20],nm[20],nvn[20],nch[20],nvaut[20],dch[20];
struct date
{
    int a;
    int m;
    int j;
};
struct lvr
{
    char nom[20];
    struct date dt;
    int pu;
    char auteur[20];
    char dmn[20];
};
struct lvr t[200];
void main()
{
    printf("\n********************************************************************************");
    printf("\n***                  1)-francais            2)-anglais                       ***");
    printf("\n********************************************************************************");
    printf("\n*******************           donner votre choix          **********************");
    scanf("%d",&cc);
    if(cc==1)
    {
        printf("\n---------------------------___Bienvenu Dans BIBLIO___---------------------------");
        printf("\n                           donner le nombre des livres       \n");
        scanf(" %d",&n);
        for(i=0;i<n;i++)
        {
            printf("\n donner le nom du livre N_%d  ",i);
            scanf(" %s",&t[i].nom);
            printf("\n donner la date d'ecriture *annee* du livre N_%d   ",i);
            scanf(" %d",&t[i].dt.a);
            printf("\n donner la date d'ecriture *mois* du livre N_%d   ",i);
            scanf(" %d",&t[i].dt.m);
            printf("\n donner la date d'ecriture *jour* du livre N_%d   ",i);
            scanf(" %d",&t[i].dt.j);
            printf("\n donner le prix de livre N_%d   ",i);
            scanf(" %d",&t[i].pu);
            printf("\n donner le nom de l'auteur du livre N_%d   ",i);
            scanf(" %s",&t[i].auteur);
            printf("\n donner le dommaine du livre N_%d  ",i);
            scanf(" %s",&t[i].dmn);
        }
        for(i=0;i<n;i++)
        {
            printf("\n---------------------------------------------");
            printf("\n Nom     : %s",t[i].nom,i);
            printf("\n date    : %d / %d / %d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
            printf("\n prix    : %dDH",t[i].pu);
            printf("\n Auteur  : %s",t[i].auteur);
            printf("\n Domaine : %s",t[i].dmn);
            printf("\n---------------------------------------------");
        }
        printf("\n********************************************************************************");
        printf("\n**                                                                            **");
        printf("\n**   1)-Suprimer             2)-Chercher              3)-Modifier             **");
        printf("\n**                                                                            **");
        printf("\n**   4)-Ajouter          5)-Afficher des information sur le programe          **");
        printf("\n********************************************************************************");
        printf("\n                          donner votre choix svp                              \n");
        scanf(" %d",&ch);
        switch(ch)
        {
        {case 1:
            {
                printf("\n              donner le nom du livre a suprimer            \n");
                scanf(" %d",&nm);
                for(i=p;i<n;i++)
                {
                    if(strcmp((t[i].nom),nm)==0)
                    {
                        printf("\n********************************__existe__**************************************");
                        printf("\n**                                                                            **");
                        printf("\n**         -Nom   : %s                                                        **",t[i].nom);
                        printf("\n**         -Auteur: %s                                                        **",t[i].auteur);
                        printf("\n**         -Date  : %d / %d / %d                                              **",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                        printf("\n**         -Prix  : %dDH                                                      **",t[i].pu);
                        printf("\n**         -domaine:%s                                                        **",t[i].dmn);
                        printf("\n**                                                                            **");
                        printf("\n********************************************************************************");
                        printf("\n                 voulez vous suprimer ce livre? (1=oui/2=non)\n");
                        scanf("   %d",&c);
                        if(c==1)
                        {
                            t[i]=t[i+1];
                        }
                    }
                    else
                        printf("\n le livre n'exite pas");
                }
                n=n-1;
                for(i=0;i<n;i++)
                {
                    printf("\n Nom    : %s",t[i].nom);
                    printf("\n date    : %d / %d / %d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                    printf("\n prix   : %dDH",t[i].pu);
                    printf("\n Auteur : %s",t[i].auteur);
                    printf("\n Domaine: %s",t[i].dmn);
                }
            }break;}
        {case 2:
            {
                printf("\n*************************    voulez vous chercher par:    **********************");
                printf("\n***                                                                          ***");
                printf("\n***          1)-nom   2)-prix   3)-dommaine   4)-nom de l'auteur             ***");
                printf("\n***                                                                          ***");
                printf("\n********************************************************************************");
                printf("\n                         donner votre choix                                  ");
                scanf(" %db ",&c);
                if(c==1)
                {
                    printf("\n  donner le nom de livre a chercher   ");
                    scanf("\n %s ",&nm);
                    for(i=0;i<n;i++)
                    {
                        if(strcmp(t[i].nom,nm)==0)
                        {
                            printf("\n********************************__existe__**************************************");
                            printf("\n**                                                                           **");
                            printf("\n**        -Nom   : %s                                                        **",t[i].nom);
                            printf("\n**        -Auteur: %s                                                        **",t[i].auteur);
                            printf("\n**        -Date  : %d / %d / %d                                              **",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                            printf("\n**        -Prix  : %dDH                                                      **",t[i].pu);
                            printf("\n**        -domaine:%s                                                        **",t[i].dmn);
                            printf("\n**                                                                           **");
                            printf("\n********************************************************************************");
                        }
                        else
                            printf("\n  le livre n'existe pas ");
                    }
                }
                else
                {
                    if(c==2)
                    {
                        printf("\ndonner le prix de livre a chercher");
                        scanf("%d ",&pch);
                        for(i=0;i<n;i++)
                        {
                            if(t[i].pu==pch)
                            {
                                printf("\n********************************__existe__**************************************");
                                printf("\n**                                                                            **");
                                printf("\n**         -Nom   : %s                                                        **",t[i].nom);
                                printf("\n**         -Auteur: %s                                                        **",t[i].auteur);
                                printf("\n**         -Date  : %d / %d / %d                                              **",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                printf("\n**         -Prix  : %dDH                                                      **",t[i].pu);
                                printf("\n**         -domaine:%s                                                        **",t[i].dmn);
                                printf("\n**                                                                            **");
                                printf("\n********************************************************************************");
                            }
                            else
                                printf("\n le livre n'existe pas ");
                        }
                    }
                    else
                        if(c==3)
                        {
                            printf("\ndonner le dommaine du livre a chercher");
                            scanf("%s",&dch);
                            for(i=0;i<n;i++)
                            {
                                if(strcmp((t[i].dmn),dch)==0)
                                {
                                    printf("\n********************************__existe__**************************************");
                                    printf("\n**                                                                            **");
                                    printf("\n**         -Nom   : %s                                                        **",t[i].nom);
                                    printf("\n**         -Auteur: %s                                                        **",t[i].auteur);
                                    printf("\n**         -Date  : %d / %d / %d                                              **",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                    printf("\n**         -Prix  : %dDH                                                      **",t[i].pu);
                                    printf("\n**         -domaine:%s                                                        **",t[i].dmn);
                                    printf("\n**                                                                            **");
                                    printf("\n********************************************************************************");
                                }
                                else
                                    printf("\n le livre n'existe pas");
                            }
                        }
                        else
                        {
                            if(c==4)
                            {
                                printf("\n donner le nom de l'auteur");
                                scanf("\n   %s",&naut);
                                for(i=0;i<n;i++)
                                {
                                    if(strcmp(t[i].auteur,naut)==0)
                                        {
                                            printf("\n********************************__existe__**************************************");
                                            printf("\n**                                                                            **");
                                            printf("\n**         -Nom   : %s                                                        **",t[i].nom);
                                            printf("\n**         -Auteur: %s                                                        **",t[i].auteur);
                                            printf("\n**         -Date  : %d / %d / %d                                              **",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                            printf("\n**         -Prix  : %dDH                                                      **",t[i].pu);
                                            printf("\n**         -domaine:%s                                                        **",t[i].dmn);
                                            printf("\n**                                                                            **");
                                            printf("\n********************************************************************************");
                                        }
                                    else
                                        printf("\n le livre n'existe pas");
                                }
                            }
                        }
                }
            }break;}
        {case 3:
            {
                printf("\n********************************************************************************");
                printf("\n***                                                                          ***");
                printf("\n***           1)-Nom   2)-Prix   3)-Nom d'auteur                             ***");
                printf("\n***                                                                          ***");
                printf("\n***                        4)-dommaine                                       ***");
                printf("\n***                                                                          ***");
                printf("\n********************************************************************************");
                printf("\n     qu'est ce que vous voulez modifier?    ");
                scanf("\n%d",&c);
                if(c==1)
                {
                    printf("\n  donner le nom de livre a modifier   \n");
                    scanf("%s",&nch);
                    for(i=0;i<n;i++)
                    {
                        if(strcmp(t[i].nom,nch)==0)
                        {
                            printf("\n********************************__existe__**************************************");
                            printf("\n**                                                                            **");
                            printf("\n**         -Nom   : %s                                                        **",t[i].nom);
                            printf("\n**         -Auteur: %s                                                        **",t[i].auteur);
                            printf("\n**         -Date  : %d / %d / %d                                              **",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                            printf("\n**         -Prix  : %dDH                                                      **",t[i].pu);
                            printf("\n**         -domaine:%s                                                        **",t[i].dmn);
                            printf("\n**                                                                            **");
                            printf("\n********************************************************************************");
                            printf("\n    donner le nouveau nom           \n");
                            scanf("%s",&nvn);
                            strcpy(t[i].nom,nvn);
                            for(i=0;i<n;i++)
                            {
                                printf("\n---------------------------------------------");
                                printf("\n Nom     : %s",t[i].nom,i);
                                printf("\n date    : %d / %d / %d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                printf("\n prix    : %dDH",t[i].pu);
                                printf("\n Auteur  : %s",t[i].auteur);
                                printf("\n Domaine : %s",t[i].dmn);
                                printf("\n---------------------------------------------");
                            }
                        }
                        else
                            printf("\n le livre n'existe pas ");
                    }
                }
                else
                {
                    if(c==2)
                    {
                        printf("\n  donner le nom de livre a modifier  \n ");
                        scanf("%s",&nch);
                        for(i=0;i<n;i++)
                        {
                            if(strcmp(t[i].nom,nch)==0)
                                {
                                    printf("\n********************************__existe__**************************************");
                                    printf("\n**                                                                            **");
                                    printf("\n**         -Nom   : %s                                                        **",t[i].nom);
                                    printf("\n**         -Auteur: %s                                                        **",t[i].auteur);
                                    printf("\n**         -Date  : %d / %d / %d                                              **",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                    printf("\n**         -Prix  : %dDH                                                      **",t[i].pu);
                                    printf("\n**         -domaine:%s                                                        **",t[i].dmn);
                                    printf("\n**                                                                            **");
                                    printf("\n********************************************************************************");
                                    printf("\n donner le nouveau prix \n");
                                    scanf("%d",&nvp);
                                    t[i].pu=nvp;
                                    for(i=0;i<n;i++)
                                    {
                                        printf("\n---------------------------------------------");
                                        printf("\n Nom     : %s",t[i].nom,i);
                                        printf("\n date    : %d / %d / %d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                        printf("\n prix    : %dDH",t[i].pu);
                                        printf("\n Auteur  : %s",t[i].auteur);
                                        printf("\n Domaine : %s",t[i].dmn);
                                        printf("\n---------------------------------------------");
                                    }
                                }
                            else
                                printf("\n le livre n'existe pas    ");
                        }
                    }
                    else
                    {
                        if(c==3)
                        {
                            printf("\n  donner le nom de livre a modifier   \n");
                            scanf("%s",&nch);
                            for(i=0;i<n;i++)
                            {
                                if(strcmp(t[i].nom,nch)==0)
                                    {
                                        printf("\n********************************__existe__**************************************");
                                        printf("\n**                                                                            **");
                                        printf("\n**         -Nom   : %s                                                        **",t[i].nom);
                                        printf("\n**         -Auteur: %s                                                        **",t[i].auteur);
                                        printf("\n**         -Date  : %d / %d / %d                                              **",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                        printf("\n**         -Prix  : %dDH                                                      **",t[i].pu);
                                        printf("\n**         -domaine:%s                                                        **",t[i].dmn);
                                        printf("\n**                                                                            **");
                                        printf("\n********************************************************************************");
                                        printf("\n donner le nouveau nom del'auteur \n");
                                        scanf("%s",&nvaut);
                                        strcpy(t[i].auteur,nvaut);
                                        for(i=0;i<n;i++)
                                        {
                                            printf("\n---------------------------------------------");
                                            printf("\n Nom     : %s",t[i].nom,i);
                                            printf("\n date    : %d / %d / %d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                            printf("\n prix    : %dDH",t[i].pu);
                                            printf("\n Auteur  : %s",t[i].auteur);
                                            printf("\n Domaine : %s",t[i].dmn);
                                            printf("\n---------------------------------------------");
                                        }
                                    }
                                else
                                    printf("\n le livre n'existe pas ");
                            }
                        }
                        else
                        {
                            if(c==4)
                            {
                                printf("\n donner le nom de livre a modifier    \n");
                                scanf("%s",&nch);
                                for(i=0;i<n;i++)
                                {
                                    if(strcmp(t[i].nom,nch)==0)
                                        {
                                            printf("\n********************************__existe__**************************************");
                                            printf("\n**                                                                            **");
                                            printf("\n**         -Nom   : %s                                                        **",t[i].nom);
                                            printf("\n**         -Auteur: %s                                                        **",t[i].auteur);
                                            printf("\n**         -Date  : %d / %d / %d                                              **",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                            printf("\n**         -Prix  : %dDH                                                      **",t[i].pu);
                                            printf("\n**         -domaine:%s                                                        **",t[i].dmn);
                                            printf("\n**                                                                            **");
                                            printf("\n********************************************************************************");
                                            printf("\n donner le nouveau domaine  \n");
                                            scanf(" %s",&nvaut);
                                            strcpy(t[i].dmn,nvaut);
                                            for(i=0;i<n;i++)
                                            {
                                                printf("\n---------------------------------------------");
                                                printf("\n Nom     : %s",t[i].nom,i);
                                                printf("\n date    : %d / %d / %d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                                printf("\n prix    : %dDH",t[i].pu);
                                                printf("\n Auteur  : %s",t[i].auteur);
                                                printf("\n Domaine : %s",t[i].dmn);
                                                printf("\n---------------------------------------------");
                                            }
                                        }
                                    else
                                        printf("\n le livre n'existe pas    ");
                                }
                            }
                        }
                    }
                }
            }break;}
        {case 4:
            {
                n=n+1;
                for(i=1;i<n;i++)
                {
                    printf("\n donner le nom de livre a ajouter a ajouter    ");
                    scanf("%s",&t[i].nom);
                    printf("\n donner la date d'ecriture *annee* a ajouter   ");
                    scanf("%d",&t[i].dt.a);
                    printf("\n donner la date d'ecriture *moi* a ajouter     ");
                    scanf("%d",&t[i].dt.m);
                    printf("\n donner la date d'ecriture *jor* a ajouter     ");
                    scanf("%d",&t[i].dt.j);
                    printf("\n donner le prix de livre a ajouter   ");
                    scanf("%d",&t[i].pu);
                    printf("\n donner le nom de l'auteur de livre a ajouter  ");
                    scanf("%s",&t[i].auteur);
                    printf("\n donner le domaine de livre a ajouter          ");
                    scanf("%s",&t[i].dmn);
                }
                for(i=0;i<n;i++)
                {
                    printf("\n---------------------------------------------");
                    printf("\n %s",t[i].nom);
                    printf("\n %d",t[i].dt.a);
                    printf("\n %d",t[i].dt.m);
                    printf("\n %d",t[i].dt.j);
                    printf("\n %d",t[i].pu);
                    printf("\n %s",t[i].auteur);
                    printf("\n %s",t[i].dmn);
                    printf("\n---------------------------------------------");
                }
            }break;}
        {case 5:
            {
                printf("\n ************* ******************* *****-------------**** ****************** *************");
                printf("\n ***                                                                         ***");
                printf("\n ***   biblio est un programe de getion d'une bibliotheque valable en Francais\n *** et en Anglais   realiser par les etudiants \n *** du 1ere annee Ingenierie infoormatique//eletronique\n *** IGA/ISGA:    ");
                printf("\n ***                                                                          ***");
                printf("\n ***    --Oussama EL-HAJJAM                                                   ****");
                printf("\n ***                                                                          ***");
                printf("\n ***                                                                          ***");
                printf("\n ***    --Oumaima BOULAKOUL                                                   ***");
                printf("\n ***                                                                          ***");
                printf("\n-------------- biblio est encadrer par  :                                     ***");
                printf("\n ***                                                                          ***");
                printf("\n ***    --Mr Mustapha BEN SAIDI                                               ***");
                printf("\n ***                                                                          ***");
                printf("\n ************* ******************* *****-------------**** ****************** *************");
            }break;}

        }

}
}
