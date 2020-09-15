#include<stdio.h>
int n1;
int n2;
main()
{
    FILE *fichier;
    fichier=fopen("C:\\Users\\oussama\\Desktop\\fichier 1.txt","w");
    if(fichier!=NULL)
    {
        fprintf(fichier,"%d \n%d",n1,n2);
    }
    fclose(fichier);
getch();
}
