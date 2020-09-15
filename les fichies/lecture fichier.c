#include<stdio.h>
main()
{
    FILE *fichier;
    fichier=fopen("voiture.txt","r");
    int matricule,n,i;
    char marque[20],prop[20];
    while(!feof(fichier))
    {
        fscanf(fichier,"%d  %s  %s\n",&matricule,&marque,&prop);
        printf("%d %s  %s\n",matricule,marque,prop);
    }
    fclose(fichier);
}
