#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,r;
    printf("donner a \n");
    scanf("%d",&a);
    printf("donner b \n");
    scanf("%d",&b);
    printf("donner c \n");
    scanf("%d",&c);
    r=b;
    b=a;
    a=c;
    c=r;
    printf("A=%d\n",a);
    printf("B=%d\n",b);
    printf("c=%d\n",c);
    puts("tapper une touche pour continuer");
    getch();
}
