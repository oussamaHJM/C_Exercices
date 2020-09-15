#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,j,n,c,aux,drp,ch,pch,rep,nvp,cc; //déclation des variable globale
char naut[20],nm[20],nvn[20],nch[20],nvaut[20],dch[20];
struct date  // structure date
{
    int a;
    int m;
    int j;
};
struct lvr   //structure livre
{
    char nom[20];
    struct date dt;
    int pu;
    char auteur[20];
    char dmn[20];
};
struct lvr t[200];//tableu de structure livre
void lecture(struct lvr t[],int n,int cc) //procédure de lecture
{
    int i;
    for(i=0;i<n;i++)
    {
        {if(cc==1)
            {
                printf("\n donner le nom du livre N_%d  ",i);
            }
            else
                printf("\n enter the name of the book N_%d ",i);
        }
        scanf(" %s",&t[i].nom);
        do
        {
            {if(cc==1)
            {
                printf("\n donner la date d'ecriture *annee* du livre N_%d  ",i);
            }
            else
                printf("\n enter the date of writing *Year* of the book N_%d ",i);
            }
            scanf(" %d",&t[i].dt.a);
        }
        while(t[i].dt.a<0);
        do
        {
            {if(cc==1)
            {
                printf("\n donner la date d'ecriture *mois* du livre N_%d  ",i);
            }
            else
                printf("\n enter the date of writing *Month* of the book N_%d ",i);
            }
            scanf(" %d",&t[i].dt.m);
        }
        while(t[i].dt.m>12);
        do
        {
            {if(cc==1)
            {
                printf("\n donner la date d'ecriture *jour* du livre N_%d  ",i);
            }
            else
                printf("\n enter the date of writing *Day* of the book N_%d ",i);
            }
            scanf(" %d",&t[i].dt.j);
        }
        while(t[i].dt.j>31);
        {if(cc==1)
            {
                printf("\n donner le prix de livre N_%d   ",i);
                scanf(" %d",&t[i].pu);
                printf("\n donner le nom de l'auteur du livre N_%d   ",i);
                scanf(" %s",&t[i].auteur);
                printf("\n donner le dommaine du livre N_%d  ",i);
                scanf(" %s",&t[i].dmn);
            }
            else
                {
                    printf("\n enter the price N_%d   ",i);
                    scanf(" %d",&t[i].pu);
                    printf("\n enter the name of the writer N_%d   ",i);
                    scanf(" %s",&t[i].auteur);
                    printf("\n enter the domain of the book N_%d  ",i);
                    scanf(" %s",&t[i].dmn);
                }
        }
    }
}
void affiche(struct lvr t[],int n,int cc) //procédure affichage
{
    int i;
    for(i=0;i<n;i++)
        {
            if(cc==1)
            {
                printf("\n---------------------------------------------");
                printf("\n Nom     : %s",t[i].nom,i);
                printf("\n date    : %d / %d / %d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                printf("\n prix    : %dDH",t[i].pu);
                printf("\n Auteur  : %s",t[i].auteur);
                printf("\n Domaine : %s",t[i].dmn);
                printf("\n---------------------------------------------");
            }
            else
                {
                    printf("\n---------------------------------------------");
                    printf("\n Name    : %s",t[i].nom,i);
                    printf("\n Date    : %d / %d / %d",t[i].dt.a,t[i].dt.m,t[i].dt.j);
                    printf("\n Price   : %dDH",t[i].pu);
                    printf("\n Writer  : %s",t[i].auteur);
                    printf("\n Domain  : %s",t[i].dmn);
                    printf("\n---------------------------------------------");
                }
        }

}
void ajout(struct lvr t[],int n,int cc)  //procédure ajout
{
    int i;
    n=n+1;
    for(i=1;i<n;i++)
    {

        {if(cc==1)
            {
                printf("\n donner le nom du livre N_%d  ",i);
            }
            else
                printf("\n enter the name of the book N_%d ",i);
        }
        scanf(" %s",&t[i].nom);
        do
        {
            {if(cc==1)
            {
                printf("\n donner la date d'ecriture *annee* du livre N_%d  ",i);
            }
            else
                printf("\n enter the date of writing *Year* of the book N_%d ",i);
            }
            scanf(" %d",&t[i].dt.a);
        }
        while(t[i].dt.a<0);
        do
        {
            {if(cc==1)
            {
                printf("\n donner la date d'ecriture *mois* du livre N_%d  ",i);
            }
            else
                printf("\n enter the date of writing *Month* of the book N_%d ",i);
            }
            scanf(" %d",&t[i].dt.m);
        }
        while(t[i].dt.m>12);
        do
        {
            {if(cc==1)
            {
                printf("\n donner la date d'ecriture *jour* du livre N_%d  ",i);
            }
            else
                printf("\n enter the date of writing *Day* of the book N_%d ",i);
            }
            scanf(" %d",&t[i].dt.j);
        }
        while(t[i].dt.j>31);
        {if(cc==1)
            {
                printf("\n donner le prix de livre N_%d   ",i);
                scanf(" %d",&t[i].pu);
                printf("\n donner le nom de l'auteur du livre N_%d   ",i);
                scanf(" %s",&t[i].auteur);
                printf("\n donner le dommaine du livre N_%d  ",i);
                scanf(" %s",&t[i].dmn);
            }
            else
                {
                    printf("\n enter the price N_%d   ",i);
                    scanf(" %d",&t[i].pu);
                    printf("\n enter the name of the writer N_%d   ",i);
                    scanf(" %s",&t[i].auteur);
                    printf("\n enter the domain of the book N_%d  ",i);
                    scanf(" %s",&t[i].dmn);
                }
        }
    }
    affiche(t,n,cc);
}
void supression(struct lvr t[],int n,int cc) //procédure de supreession
{
    int i;
    if(cc==1)
    {
        printf("\n              donner le nom du livre a suprimer            \n");
        scanf(" %d",&nm);
        for(i=0;i<n;i++)
        {
            if(strcmp((t[i].nom),nm)==0)
            {
                printf("\n********************************__existe__**************************************");
                affiche(t,n,cc);
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
        affiche(t,n,cc);
    }
    else
    {
        printf("\n              Enter the name of the book to delete            \n");
        scanf(" %d",&nm);
        for(i=0;i<n;i++)
        {
            if(strcmp((t[i].nom),nm)==0)
            {
                printf("\n********************************__exist__**************************************");
                affiche(t,n,cc);
                printf("\n********************************************************************************");
                printf("\n                 are you sure you want to delete this book ? (1=YES/2=NO)\n");
                scanf("   %d",&c);
                if(c==1)
                {
                    t[i]=t[i+1];
                }
            }
            else
                printf("\n the book does'nt exist");
        }
        n=n-1;
        affiche(t,n,cc);
    }

}
void cherch(struct lvr t[],int n,int cc) //procédure de recherche
{
    int i,c;
    {if(cc==1)
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
                            affiche(t,n,cc);
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
                            affiche(t,n,cc);
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
                            affiche(t,n,cc);
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
                                affiche(t,n,cc);
                                printf("\n********************************************************************************");
                            }
                            else
                            printf("\n le livre n'existe pas");
                        }
                    }
                }
            }
        }
            else
                {
                    printf("\n*************************    search MENU:    **********************");
                    printf("\n***                                                                          ***");
                    printf("\n***          1)-Name   2)-Price   3)-Domain   4)-writer's name             ***");
                    printf("\n***                                                                          ***");
                    printf("\n********************************************************************************");
                    printf("\n                         give your choice                                 ");
                    scanf(" %db ",&c);
                    if(c==1)
                    {
                        printf("\n  enter the name of the book to search   ");
                        scanf("\n %s ",&nm);
                        for(i=0;i<n;i++)
                        {
                            if(strcmp(t[i].nom,nm)==0)
                            {
                                printf("\n********************************__exist__**************************************");
                                affiche(t,n,cc);
                                printf("\n********************************************************************************");
                            }
                            else
                                printf("\n the book does'nt exist");
                        }
                    }
                    else
                    {
                    if(c==2)
                    {
                        printf("\n enter the price of the book to search");
                        scanf("%d ",&pch);
                        for(i=0;i<n;i++)
                        {
                            if(t[i].pu==pch)
                            {
                                printf("\n********************************__existe__**************************************");
                                affiche(t,n,cc);
                                printf("\n********************************************************************************");
                            }
                        else
                            printf("\n the book does'nt exist");
                        }
                    }
                    else
                    if(c==3)
                    {
                        printf("\n  enter the domaine of the book");
                        scanf("%s",&dch);
                        for(i=0;i<n;i++)
                        {
                            if(strcmp((t[i].dmn),dch)==0)
                            {
                                printf("\n********************************__exist__**************************************");
                                affiche(t,n,cc);
                                printf("\n********************************************************************************");
                            }
                            else
                                printf("\n the book does'nt exist");
                        }
                    }
                    else
                    {
                        if(c==4)
                        {
                            printf("\n enter the name of the writer");
                            scanf("\n   %s",&naut);
                            for(i=0;i<n;i++)
                            {
                                if(strcmp(t[i].auteur,naut)==0)
                                {
                                    printf("\n********************************__exist__**************************************");
                                    affiche(t,n,cc);
                                    printf("\n********************************************************************************");
                                }
                                else
                                printf("\n the book does'nt exist");
                            }
                        }
                    }
                }
            }
        }

}
void modfi(struct lvr t[],int i)//procedure de modification
{
    int c;
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
                affiche(t,n,cc);
                printf("\n********************************************************************************");
                printf("\n    donner le nouveau nom           \n");
                scanf("%s",&nvn);
                strcpy(t[i].nom,nvn);
                affiche(t,n,cc);
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
                    affiche(t,n,cc);
                    printf("\n********************************************************************************");
                    printf("\n donner le nouveau prix \n");
                    scanf("%d",&nvp);
                    t[i].pu=nvp;
                    affiche(t,n,cc);
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
                        affiche(t,n,cc);
                        printf("\n********************************************************************************");
                        printf("\n donner le nouveau nom del'auteur \n");
                        scanf("%s",&nvaut);
                        affiche(t,n,cc);
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
                            affiche(t,n,cc);
                            printf("\n********************************************************************************");
                            printf("\n donner le nouveau domaine  \n");
                            scanf(" %s",&nvaut);
                            strcpy(t[i].dmn,nvaut);
                            affiche(t,n,cc);
                        }
                        else
                            printf("\n le livre n'existe pas    ");
                    }
                }
            }
        }
    }
}
void info(a)//procedure information sur biblio
{
    if(cc==1)
    {
        printf("\n ********* ******************* *****-------------**** ****************** ********");
        printf("\n ***                                                                          ***");
        printf("\n ***   biblio est un programe de getion d'une bibliotheque valable en         ***");
        printf("\n ***   ## Anglais et en Fracais                                               ***");
        printf("\n ***                                                                          ***");
        printf("\n-------------- biblio est realiser par  :                                     ***");
        printf("\n ***                                                                          ***");
        printf("\n ***    --Oussama EL-HAJJAM                                                   ***");
        printf("\n ***                                                                          ***");
        printf("\n ***                                                                          ***");
        printf("\n ***    --Oumaima BOULAKOUL                                                   ***");
        printf("\n ***                                                                          ***");
        printf("\n ***                        ISGA/IGA  etudiants 1ere annee d'ingenierie       ***");
        printf("\n ***                                                                          ***");
        printf("\n-------------- biblio est encadrer par  :                                     ***");
        printf("\n ***                                                                          ***");
        printf("\n ***    --Mr Mustapha BEN SAIDI                                               ***");
        printf("\n ***                                                                          ***");
        printf("\n ***                                                              2015/2016   ***");
        printf("\n ********* ******************* *****-------------**** ****************** ********");
    }
    else
    {
        printf("\n ********* ******************* *****-------------**** ****************** ********");
        printf("\n ***                                                                          ***");
        printf("\n ***   biblio is a multi-language library organisation program  available in  ***");
        printf("\n ***                                                                          ***");
        printf("\n ***   ## English and French                                                  ***");
        printf("\n ***                                                                          ***");
        printf("\n-------------- biblio made by  :                                              ***");
        printf("\n ***                                                                          ***");
        printf("\n ***    --Oussama EL-HAJJAM                                                   ***");
        printf("\n ***                                                                          ***");
        printf("\n ***                                                                          ***");
        printf("\n ***    --Oumaima BOULAKOUL                                                   ***");
        printf("\n ***                                                                          ***");
        printf("\n ***                            ISGA/IGA  1st year engineering students       ***");
        printf("\n ***                                                                          ***");
        printf("\n-------------- biblio gided by :                                              ***");
        printf("\n ***                                                                          ***");
        printf("\n ***    --Mr Mustapha BEN SAIDI                                               ***");
        printf("\n ***                                                                          ***");
        printf("\n ***                                                              2015/2016   ***");
        printf("\n ********* ******************* *****-------------**** ****************** ********");
    }

}
void tri(struct lvr t[],int n,int cc)//procedure tri
{
    int i,cj,j;
    struct lvr aux;
    if(cc==1)
    {
        printf("\n********************************************************************************");
        printf("\n***   1)-ordre alphabetique       2)- prix            3)-date d'ecriture     ***");
        printf("\n********************************************************************************\n");
        scanf("%d",&cj);
        switch(cj)
        {
        case 1:
            {
                for(i=0;i<n-1;i++)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(strcmp(t[i].nom,t[j].nom)==1)
                        {
                            aux=t[i];
                            t[i]=t[j];
                            t[j]=aux;
                        }
                    }
                }
                affiche(t,n,cc);
            }break;
        case 2:
            {
                for(i=0;i<n-1;i++)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(t[i].pu>t[j].pu)
                        {
                            aux=t[i];
                            t[i]=t[j];
                            t[j]=aux;
                        }
                    }
                }
                affiche(t,n,cc);
            }break;
        case 3:
            {
                for(i=0;i<n-1;i++)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(t[i].dt.a>t[j].dt.a)
                        {
                            aux=t[i];
                            t[i]=t[j];
                            t[j]=aux;
                        }
                        else
                        {
                            if(t[i].dt.a==t[j].dt.a)
                            {
                                if(t[i].dt.m<t[j].dt.m)
                                {
                                    aux=t[i];
                                    t[i]=t[j];
                                    t[j]=aux;
                                }
                                else
                                {
                                    if(t[i].dt.m==t[j].dt.m)
                                    {
                                        if(t[i].dt.j<t[j].dt.j)
                                        {
                                            aux=t[i];
                                            t[i]=t[j];
                                            t[j]=aux;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                affiche(t,n,cc);
            }
        }
    }
    else
    {
        printf("\n********************************************************************************");
        printf("\n***      1)-Names order         2)- price            3)-writing's date       ***");
        printf("\n********************************************************************************\n");
        scanf("%d",&cj);
        switch(cj)
        {
        case 1:
            {
                for(i=0;i<n-1;i++)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(strcmp(t[i].nom,t[j].nom)==1)
                        {
                            aux=t[i];
                            t[i]=t[j];
                            t[j]=aux;
                        }
                    }
                }
                affiche(t,n,cc);
            }break;
        case 2:
            {
                for(i=0;i<n-1;i++)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(t[i].pu>t[j].pu)
                        {
                            aux=t[i];
                            t[i]=t[j];
                            t[j]=aux;
                        }
                    }
                }
                affiche(t,n,cc);
            }break;
        case 3:
            {
                for(i=0;i<n-1;i++)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(t[i].dt.a>t[j].dt.a)
                        {
                            aux=t[i];
                            t[i]=t[j];
                            t[j]=aux;
                        }
                        else
                        {
                            if(t[i].dt.a==t[j].dt.a)
                            {
                                if(t[i].dt.m>t[j].dt.m)
                                {
                                    aux=t[i];
                                    t[i]=t[j];
                                    t[j]=aux;
                                }
                                else
                                {
                                    if(t[i].dt.m==t[j].dt.m)
                                    {
                                        if(t[i].dt.j>t[j].dt.j)
                                        {
                                            aux=t[i];
                                            t[i]=t[j];
                                            t[j]=aux;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                affiche(t,n,cc);
            }
        }
    }
}
void main() //début du programme
{
    printf("\n********************************************************************************");//choix de la langue
    printf("\n***                  1)-francais            2)-anglais                       ***");
    printf("\n********************************************************************************");
    printf("\n*******************           donner votre choix          **********************\n");
    scanf("%d",&cc);
    if(cc==1)
    {
        printf("\n---------------------------___Bienvenu Dans BIBLIO___---------------------------");
        printf("\n                           donner le nombre des livres       \n");
        scanf("%d",&n);
        lecture(t,n,cc);
        affiche(t,n,cc);
        do
        {
            printf("\n********************************************************************************");
            printf("\n**                                                                            **");
            printf("\n**   1)-Suprimer             2)-Chercher              3)-Modifier             **");
            printf("\n**                                                                            **");
            printf("\n**   4)-Ajouter                   5)-Afficher des information sur le programe **");
            printf("\n**                   6)-tri                                                   **");
            printf("\n********************************************************************************");
            printf("\n                          donner votre choix svp                              \n");
            scanf(" %d",&ch);
            switch(ch)
            {
            {case 1:
                {
                    supression(t,n,cc);
                }break;}
            {case 2:
                {
                    cherch(t,n,cc);
                }break;}
            {case 3:
                {
                    modfi(t,n);
                }break;}
            {case 4:
                {
                    ajout(t,n,cc);
                }break;}
            {case 5:
                {
                    info(n);
                }break;}
            {case 6:
                {
                    tri(t,n,cc);
                }break;}
            }
            printf("\n pour rafficher le menu de choix tapper sur 1 ");
            scanf("%d",&rep);
    }
    while(rep==1);
}
    if(cc==2)
    {
        printf("\n---------------------------___ELCOME TO BIBLIO___---------------------------");
        do
        {
            printf("\n                           enter the name of the books       \n");
            scanf(" %d",&n);
            lecture(t,n,cc);
            affiche(t,n,cc);
            printf("\n********************************************************************************");
            printf("\n**                                                                            **");
            printf("\n**   1)-Delete             2)-Search                 3)-Modify                **");
            printf("\n**                                                                            **");
            printf("\n**   4)-ADD                5)-ABOUT                  6)-orgnise               **");
            printf("\n********************************************************************************");
            printf("\n                          enter your choice please                            \n");
            scanf(" %d",&ch);
            switch(ch)
            {
            {case 1:
                {
                    supression(t,n,cc);
                }break;}
            {case 2:
                {
                    cherch(t,n,cc);
                }break;}
            {case 3:
                {
                    modfi(t,n);
                }break;}
            {case 4:
                {
                    ajout(t,n,cc);
                }break;}
            {case 5:
                {
                    info(n);
                }break;}
            {case 6:
                {
                    tri(t,n,cc);
                }break;}
            }
            printf("\n pour rafficher le menu de choix tapper sur 1 ");
            scanf("%d",&rep);
    }
    while(rep==1);
    }
    if(cc==1)
    {
        puts("tapper une touche pour continuer....");
    }
    else
    {
        printf("press any button to continue ....");
    }

    getch();
}
