#include<stdio.h>
double n1=31684;
double n2=316846;
main()
{
    FILE *fichier;
    fichier=fopen("C:\\Users\\oussama\\Desktop\\ex1.txt","w");
    if(fichier!=NULL)
    {
        fprintf(fichier,"%lf \n%lf ",n1,n2);
    }
    fclose(fichier);
}
