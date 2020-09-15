#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,p,s,d;
    printf("donner A\n");
    scanf("%d",&a);
    printf("donner B\n");
    scanf("%d",&b);
    p=a*b;
    s=a+b;
    d=abs(b-a);
    printf("A*B=%d\n",p);
    printf("A+b=%d\n",s);
    printf("differance =%d\n",d);
    puts("tapper une touche pour continuer");
    getch();
}
