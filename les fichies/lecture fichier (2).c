#include<stdio.h>
main()
{
    FILE *nbr1;
    nbr1=fopen("nombre1.txt","r");
    int n1;
    printf("donner le nombre 1	");
    scanf("%d",&n1);
    fprintf(nbr1,"%d",n1);
    fclose(nbr1);
    FILE *nbr2;
    nbr2=fopen("nombre2.txt","r");
    int n2;
    printf("donner le nombre 2	");
    scanf("%d",&n2);
    fprintf(nbr1,"%d",n2);
    fclose(nbr2);
    FILE * somme;
    somme=fopen("somme.txt","w");
    int s;
    s=n1+n2;
    fprintf(somme,"%d",s);
    fclose(somme);
}
