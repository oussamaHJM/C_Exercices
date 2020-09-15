#include<stdio.h>
#include<conio.h>
int Fm,i,j,k,Fp,Fpm,c,p,z,m;
void main()
{
    printf("Donnez p\n");
    scanf("%d",&p);
    printf("Donnez m\n");
    scanf("%d",&m);
    Fm=1;
    for(j=1 ; j<=m ; j++)
        Fm=Fm*j;
    Fp=1;
    for(i=1 ; i<=p ; i++)
        Fp=Fp*i;
    z=p-m;
    Fpm=1;
    for(k=1 ; k<=z; k++)
        Fpm=Fpm*k;
    c=(Fp)/(Fm*Fpm);
    printf("La combinaison est c=%d\n",c);
    printf("Pour continuer Tapez sur une touche");
    getch();
}
