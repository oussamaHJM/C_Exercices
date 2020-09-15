#include <stdio.h>
#include <stdlib.h>
#include"file.h"

int main()
{

    return 0;
}

void inserer_n_elm1( file** p,int data)
{

}



void afficher(file* f){
    printf(" DEBUT >>");
    while(f!=NULL){
        printf(" %d >>",f->data);
        f=f->suivant;
    }
     printf(" FIN\n");
}
