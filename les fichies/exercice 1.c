#include<stdio.h>
#include<conio.h>
main()
{
    FILE * fichier;
    fichier=fopen("nombre.txt.txt","r");
    int n1,n2,n3,n4,n5;
    int s=0;
    float m=0;
    fscanf(fichier,"%d\n%d\n%d\n%d\n%d\n",&n1,&n2,&n3,&n4,&n5);
    printf("%d\n%d\n%d\n%d\n%d",n1,n2,n3,n4,n5);
    s=n1+n2+n3+n4+n5;
    m=s/5;
    printf("la somme est = %d",s);
    printf("\n la mayenne est %f",m);
    fclose(fichier);
}
