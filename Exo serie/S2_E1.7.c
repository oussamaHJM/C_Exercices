#include<stdio.h>
#include<conio.h>
void main()
{
    int N,H,M,S,R,A;
    printf("Donnez le nombre de secondes \n");
    scanf("%d",&N);
    R=N%3600;
    H=(N-R)/3600;
    A=R%60;
    M=(R-A)/60;
    S=A;
    printf("%d secondes = %d heures %d minutes %d secondes\n",N,H,M,S);
    puts("Pour continuer frapper une touche...");
    getch();
}
