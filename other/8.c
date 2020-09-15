#include<stdio.h>
#include<math.h>
#include<conio.h>
int a,b,c,s,p;
void main()
{
    printf("donner A\n");
    scanf("%d",&a);
    printf("donner B\n");
    scanf("%d",&b);
    printf("donner C\n");
    scanf("%d",&c);
    s=a+b+c;
    p=a*b*c;
    if(a%3==0)
        printf("A multiple de 3");
    if(b%3==0)
        printf("B multiple de 3");
    if(c%3==0)
        printf("C multiple de 3");
    getch();
}
