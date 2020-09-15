#include<stdio.h>
main()
{
    struct point;
    {
        char nom;
        int x;
        int y;
    };
    struct point p;
    char n;
    int s,i;
    printf("donner le nom de fichier \n");
    scanf("%s",&n);
    printf("donner le nombre des points \n");
    scanf("%d",&s);
    FILE *fichier;
    fichier=fopen(n,"w");





    fclose(fichier);
}

