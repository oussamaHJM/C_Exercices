
#include<stdio.h>
#include<conio.h>

struct date{
	int jour,moins,annee;
};
struct enfant{
	char nom[10];
	char prenom[10];
	struct {
	int jour,moins,annee;
    }date;
    int age ;
};

struct	Salarie {

 char ident [30];
 char nom [30] ;
 char prenom [20];
 char  sexe [20];
 struct {
	int jour,moins,annee;
    }date;
 int n_enfant;
 struct{
	char nom[20];
	char prenom[20];
	struct {
	int jour,moins,annee;
    }date;
    int age ;
} enfant;
};

int main()
{


int n;

int i;

printf("entrez le nombre d'element de struct \n");
scanf("%d",&n);
struct Salarie sal [n] ;
for(i=0;i<n;i++)
     {
	   printf(" entrez l'identifiant :\n  ");
           scanf("%s",&sal[i].ident);

       printf(" entrez le nom : \n");
           scanf("%c",&sal[i].nom);


      printf(" entrez le prenom : \n ");
           scanf("%c",&sal[i].prenom);

    printf(" entrez le sexe : \n ");
           scanf("%c",&sal[i].sexe);

 printf(" entrez la date de naissance  : \n ");
          	scanf ("%d",&sal[i].date.jour);
       	    scanf ("%d",&sal[i].date.moins);
	        scanf ("%d",&sal[i].date.annee);

 printf(" entrez le nombre des enfants : \n ");
           scanf("%d",&sal[i].n_enfant);

         printf(" entrez le nom de l'enfant: \n");
         scanf("%d",&sal[i].enfant.nom);


         printf(" entrez le prenom  : \n ");
           scanf("%c",&sal[i].enfant.prenom);

           printf(" entrez la date de naissance de l'enant'  : \n ");
          	scanf ("%d",&sal[i].enfant.date.jour);
       	    scanf ("%d",&sal[i].enfant.date.moins);
	        scanf ("%d",&sal[i].enfant.date.annee);

    printf(" entrez l'age  de l'enfant: \n");
         scanf("%d",sal[i].enfant.age);
   return 0;
}
}
