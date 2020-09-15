#include<stdio.h>
#include<conio.h>
#include<math.h>
int o,m,r1,r2,k;
void main()
{
    printf("donner la capacité en octet\n");
    scanf("%d",&o);
    r1=o%(1024*1024);
    m=(o-r1)/(1024*1024);
    r2=r1%1024;
    k=(r1-r2)/1024;
    o=r2;
    printf("%d Mo %d ko %d o",m,k,o);
    puts("pour continuer frapper une touche ...");
    getch();
}
