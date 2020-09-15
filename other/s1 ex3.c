#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    a=61;
    b=2;
    printf("la valeur de a est:%d\n",a);
    printf("la valeur de b est:%d\n",b);
    c=a;
    a=b;
    b=c;
    printf("la nouvelle valeur de a est:%d\n",a);
    printf("la nouvelle valeur de b est:%d\n",b);
    puts("pour continuer frapper une touche");
    getch();
}
