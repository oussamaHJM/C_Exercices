#include<conio.h>
#include<stdio.h>
#include<math.h>
int n,h,mn,s,r1,r2;
void main()
{
    printf("donner le nombre de secondes\n");
    scanf("%d",&n);
    r1=n%3600;
    h=(n-r1)/3600;
    r2=r1%60;
    mn=(r1-r2)/60;
    s=r2;
    printf("%dH %dMin %dS",h,mn,s);
    puts("tapper une touche pour continuer....");
    getch();
}
