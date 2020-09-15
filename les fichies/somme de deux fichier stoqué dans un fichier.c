#include<stdio.h>
main()
{
    FILE *nbr1;
    FILE *nbr2;
    FILE * somme;
	int n1,n2,s;
    nbr1=fopen("nombre1.txt","r");
    nbr2=fopen("nombre2.txt","r");
    somme=fopen("somme.txt","w");
    fscanf(nbr1,"%d",&n1);
    fscanf(nbr2,"%d",&n2);
    fprintf(nbr1,"%d",n1);
    fprintf(nbr2,"%d",n2);
    s=n1+n2;
    fprintf(somme,"%d",s);
    fclose(somme);
    fclose(nbr2);
	fclose(nbr1);
    
}
