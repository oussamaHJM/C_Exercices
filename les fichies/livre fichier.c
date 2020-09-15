#include<stdio.h>
struct livre{
    char titre[20];
    char auteur[20];
    int nbr_mots;
    int date_pub;
};
int n,i;
main()
{
    FILE *fichier;
    fichier=fopen("livres.txt","w");
    printf("donner le nombre de livre que vous voulez stoqué \n");
    scanf("%d",&n);
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
        fprintf(fichier,"%s %s %d %d\n",v.titre,v.auteur,v.nbr_mots,v.date_pub);
    }
    fclose(fichier);
}
