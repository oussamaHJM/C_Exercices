#include<stdio.h>
int n1=50;
int n2;
main()
{
    printf("donner la valeur du nombre");
    scanf("%d",&n2);
    FILE *fichier;
    fichier=fopen("C:\\Users\\oussama\\Desktop\\exemple1.txt","a");
    if(fichier!=NULL)
    {
        fprintf(fichier,"le premier nombre %d \nle deuxieme nombre %d ",n1,n2);
    }
    else
    {
        printf("le fichier n'est pas crée");
    }
    fclose(fichier);
}
