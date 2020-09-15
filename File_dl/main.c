/* DATE   : LE 09/03/2017
 * AUTEUR : Khalid EL GHOLAMI
 * OBJET  : les Files par Listes Doublement Chainnées  (ISGA SETTAT)
 */
#include <stdio.h>
#include <stdlib.h>

#include "file_dl.h"
int main()
{
    File_dl *p_file = NULL;
    p_file = file_dl_cree();
    int donnee, i=0;
    while(i<3){
        printf("\nDonner un element a inserer a la file : ");
        scanf("%d",&donnee);
        file_dl_ajouter_debut(p_file,donnee);
        i++;
        file_dl_afficher(p_file);
    }
    printf("\nTaille est : %d\n",p_file->taille);
    file_dl_afficher(p_file);

    i=0;
    int ret;
    while(i<5){

        ret = file_dl_retirer_fin(p_file);
        if(ret==0)
            printf("Liste Vide");
        else
            printf("\nElement traite (%d) : %d\n",i,ret);
        i++;
        file_dl_afficher(p_file);


    }
    return 0;
}
