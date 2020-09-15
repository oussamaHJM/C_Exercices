#include<stdio.h>
#include<conio.h>
main()
{
    FILE * fichier;
    fichier=fopen("nombre.txt.txt","r");
    int nb;
    int somme=0;
    while(!feof(fichier))
    {
        fscanf(fichier,"%d\n",&nb);
        printf("%d\n",nb);
        somme=somme+nb;
    }
    printf("la somme est = %d",somme);
    fclose(fichier);
getch();
}
