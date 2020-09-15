#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.h"
int main(int argc, char* argv[])
{
    File *p_file = NULL;
    int n;

    printf("#Ajout de N elements\n\t- Nombre d'element a ajouter : ");
    scanf("%d",&n);
    ajout_n_elm(&p_file,n);

    printf("\t- Taille de file est: %d\n",(int)taille_file(p_file,0));
    printf("\n#Affichage de la file");
    afficher_file(p_file,0);
    getchar();
    getchar();

    printf("\n#retrait d'un element de la file\n\t- l'element retire est: ");
    n=file_dequeue(&p_file);
    if(n == -1)// aucun element retourné
        printf("RIEN");
    else{
        printf("%d",n);
        printf("\n\t- Affichage de la file apres le retrait");
        afficher_file(p_file,0);
    getchar();
    }

    file_clear(&p_file);

    return 0;
}
