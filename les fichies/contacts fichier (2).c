#include<stdio.h>
struct livre{
    char titre[20];
    char auteur[20];
    int nbr_mots;
    int date_pub;
};
int n,i,nbmt,dtpb;
char titre[20],auteur[20];
main()
{
    FILE *fichier;
    fichier=fopen("livres.txt","w");
    printf("donner le nombre de livre que vous voulez stoqué \n");
    sacanf("%d",&n);
    for(i=0;i<n;i++)
    { struct livre v;
        printf("titre %d : ",i+1);
        scanf("%s",&v.titre);
        printf("auteur %d : ",i+1);
        scanf("%s",&v.auteur);
        printf("nbr des mots %d : ",i+1);
        scanf("%d",&v.nbr_mots);
        printf("date de pub %d : ",i+1);
        scanf("%d",&v.date_pub);
        fprintf(fichier,"%s\n",titre);
        fprintf(fichier,"%s\n",auteur);
        fprintf(fichier,"%d\n",nbmt);
        fprintf(fichier,"%d\n",dtpb);
    }
    fclose(fichier);
}
