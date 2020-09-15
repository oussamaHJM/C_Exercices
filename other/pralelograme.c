#include<stdio.h>
#include<conio.h>
#include<math.h>
int a,b,c,k,i,j;
void main()
{
    printf("donner la valeur de a \n");
    scanf("%d",&a);
    printf("donner la valeur de b \n");
    scanf("%d",&b);
    printf("donner la valeur de c \n");
    scanf("%d",&c);
    for(j=0;j<b;j++)
    {
        for(k=0;k<j;k++)
            printf("  ");
        for(k=j;k<a+j;k++)
            printf("* ");
        printf("\n");
    }
    getch();
}
