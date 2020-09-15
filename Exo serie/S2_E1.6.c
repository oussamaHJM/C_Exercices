#include<stdio.h>
#include<conio.h>
void main()
{
   int N,T,G,M,K,O,R,S,X,A;
    printf("Donnez la valeur en octets\n");
    scanf("%d",&N);
R=N%1099511628000;
T=(N-R)/1099511628000;
S=R%1073741824;
G=(R-S)/1073741824;
X=S%1048576;
M=(S-X)/1048576;
A=X%1024;
K=(X-A)/1024;
O=A;
printf(" %d tera %d giga %d mega %d kilo %d octet\n",T,G,M,K,O);
    puts("Pour continuer frapper une touche...");
    getch();
}
