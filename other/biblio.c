#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int i,j,n,c,aux,drp,ch,pch,p,nvp;
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
    printf("\n-----------Bienvenu Dans BIBLIO-----------");
    printf("\n        donner le nombre des livres       ");
    scanf("\n%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n donner le nom du livre N%d",i);
        scanf("\n %s",&t[i].nom);
        printf("\n donner la date d'ecriture *annee* du livre N%d",i);
        scanf("\n %d",&t[i].dt.a);
        printf("\n donner la date d'ecriture *mois* du livre N%d",i);
        scanf("\n %d",&t[i].dt.m);
        printf("\n donner la date d'ecriture *jour* du livre N%d",i);
        scanf("\n %d",&t[i].dt.j);
        printf("\n donner le nom de l'auteur du livre N%d",i);
        scanf("\n %s",&t[i].auteur);
        printf("\n donner le dommaine du livre N%d",i);
        scanf("\n %s",&t[i].dmn);
    }
    for(i=0;i<n;i++)
    {
        printf("\n %s",&t[i].nom);
        printf("\n %d",&t[i].dt.a);
        printf("\n %d",&t[i].dt.m);
        printf("\n %d",&t[i].dt.j);
        printf("\n %s",&t[i].auteur);
        printf("\n %s",&t[i].dmn);
    }
    printf("\n********************************************");
    printf("\n** 1)-Suprimer   2)-Chercher  3)-Modifier **");
    printf("\n**************** 4)-Ajouter ****************");
    printf("\n********************************************");
    printf("\n          donner votre choix svp            ");
    scanf("\n%d",&ch);
    switch(ch)
    {
        {case 1:
        {
            printf("\ndonner le numero du livre a suprimer");
            scanf("\n%d",&p);
            printf("\nle livre qui existe dans cette case est:",t[p].nom);
            printf("\nvoulez vous vraiment le suprimer ?(1=suprimer/2=non)");
            scanf("\n%d",&c);
            if(c==1);
                {
                    for(i=p;i<n;i++)
                    {
                        t[i]=t[i+1];
                    }
                    n=n-1;
                }
        }break;}
    {case 2:
        {
            printf("\n**************voulez vous chercher par:**************");
            printf("\n***1)-nom  2)-prix  3)-dommaine 4)-nom de l'auteur***");
            printf("\n*****************************************************");
            printf("\ndonner votre choix");
            scanf("\n%d",&c);
            if(c==1)
            {
                printf("\ndonner le nom de livre a chercher");
                scanf("\n%s",&nm);
                for(i=0;i<n;i++)
                {
                    if(strcmp(t[i].nom,nm)==0)
                    {
                        printf("\n**************existe******************");
                        printf("\n   -Nom:%s",t[i].nom);
                        printf("\n   -Auteur:%s",t[i].auteur);
                        printf("\n   -Date d'ecriture:%d/%d/%d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                        printf("\n   -Prix: %dDH",t[i].pu);
                    }
                    else
                        printf("\nle livre n'existe pas");
                }
            }
            else
            {
                if(c==2)
                {
                    printf("\ndonner le prix de livre a chercher");
                    scanf("\n%d",&pch);
                    for(i=0;i<n;i++)
                    {
                        if(t[i].pu==pch)
                        {
                            printf("\n**************existe******************");
                            printf("\n   -Nom:%s",t[i].nom);
                            printf("\n   -Auteur:%s",t[i].auteur);
                            printf("\n   -Date d'ecriture:%d/%d/%d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                            printf("\n   -Prix: %dDH",t[i].pu);
                        }
                        else
                            printf("\nle livre n'existe pas");
                    }
                }
                else
                    if(c==3)
                    {
                        printf("\ndonner le dommaine du livre a chercher");
                        scanf("\n%d",&dch);
                        for(i=0;i<n;i++)
                        {
                            if(strcmp(t[i].dmn,dch)==0)
                            {
                                printf("\n**************existe******************");
                                printf("\n   -Nom:%s",t[i].nom);
                                printf("\n   -Auteur:%s",t[i].auteur);
                                printf("\n   -Date d'ecriture:%d/%d/%d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                printf("\n   -Prix: %dDH",t[i].pu);
                            }
                            else
                                printf("\nle livre n'existe pas");
                        }
                    }
                    else
                    {
                        if(c==4)
                        {
                            printf("\ndonner le nom de l'auteur");
                            scanf("\n%s",&naut);
                            for(i=0;i<n;i++)
                            {
                                if(strcmp(t[i].auteur,naut)==0)
                                    {
                                        printf("\n**************existe******************");
                                        printf("\n   -Nom:%s",t[i].nom);
                                        printf("\n   -Auteur:%s",t[i].auteur);
                                        printf("\n   -Date d'ecriture:%d/%d/%d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                        printf("\n   -Prix: %dDH",t[i].pu);
                                    }
                                else
                                    printf("\nle livre n'existe pas");
                            }
                        }
                    }
            }
        }break;}
    case 3:
        {
            printf("\n****************************************");
            printf("\n***1)-Nom   2)-Prix   3)-Nom d'auteur***");
            printf("\n**************4)-dommaine***************");
            printf("\n   qu'est ce que vous voulez modifier?");
            scanf("\n%d",&c);
            if(c==1)
            {
                printf("\ndonner le nom de livre a modifier");
                scanf("\n%s",&nch);
                for(i=0;i<n;i++)
                {
                    if(strcmp(t[i].nom,nch)==0)
                    {
                        printf("\n**************existe******************");
                        printf("\n   -Nom:%s",t[i].nom);
                        printf("\n   -Auteur:%s",t[i].auteur);
                        printf("\n   -Date d'ecriture:%d/%d/%d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                        printf("\n   -Prix: %dDH",t[i].pu);
                        printf("\ndonner le nouveau nom");
                        scanf("\n%s",&nvn);
                        strcpy(t[i].nom,nvn);
                    }
                    else
                        printf("\nle livre n'existe pas");
                }

            }
            else
            {
                if(c==2)
                {
                    printf("\ndonner le prix a modifier");
                    scanf("\n%d",&pch);
                    for(i=0;i<n;i++)
                    {
                        if(t[i].pu==pch)
                            {
                                printf("\n**************existe******************");
                                printf("\n   -Nom:%s",t[i].nom);
                                printf("\n   -Auteur:%s",t[i].auteur);
                                printf("\n   -Date d'ecriture:%d/%d/%d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                printf("\n   -Prix: %dDH",t[i].pu);
                                printf("\ndonner le nouveau prix");
                                scanf("\n%s",&nvp);
                                t[i].pu==nvp;
                            }
                        else
                            printf("\nle livre n'existe pas");
                    }
                }
                else
                {
                    if(c==3)
                    {
                        printf("\ndonner le nom d'auteur a modifier");
                        scanf("\n%d",&naut);
                        for(i=0;i<n;i++)
                        {
                            if(strcmp(t[i].auteur,naut)==0)
                                {
                                    printf("\n**************existe******************");
                                    printf("\n   -Nom:%s",t[i].nom);
                                    printf("\n   -Auteur:%s",t[i].auteur);
                                    printf("\n   -Date d'ecriture:%d/%d/%d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                    printf("\n   -Prix: %dDH",t[i].pu);
                                    printf("\ndonner le nouveau nom del'auteur");
                                    scanf("\n%s",&nvaut);
                                    strcpy(t[i].auteur,nvaut);
                                }
                            else
                                printf("\nle livre n'existe pas");
                        }
                    }
                    else
                    {
                        if(c==4)
                        {
                            printf("\ndonner le nom de livre a modifier");
                            scanf("\n%d",&naut);
                            for(i=0;i<n;i++)
                            {
                                if(strcmp(t[i].dmn,naut))
                                    {
                                        printf("\n**************existe******************");
                                        printf("\n   -Nom:%s",t[i].nom);
                                        printf("\n   -Auteur:%s",t[i].auteur);
                                        printf("\n   -Date d'ecriture:%d/%d/%d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                                        printf("\n   -Prix: %dDH",t[i].pu);
                                        printf("\ndonner le nouveau nom del'auteur");
                                        scanf("\n%s",&nvaut);
                                        strcpy(t[i].dmn,nvaut);
                                    }
                                else
                                    printf("\nle livre n'existe pas");
                            }
                        }
                    }
                }
            }
        }
    case 4:
        {
            n=n+1;
            printf("\nvous etes entrain d'ajouter un nouveau livre ");
        }
    }
}
