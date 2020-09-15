#include<stdio.h>
#include<conio.h>
int a,b,j,i;
void main()
{
    printf("donner le nbr a \n");
    scanf("%d",&a);

    for (i=0;i<a;i++)
    {
        for (j=0;j<a-i;j++)
            printf("* ");
        for (j=a-i;j<2*a+1;j++)
            printf("* ");
        for (a+i;j<2*a+1;j++)
            printf("* ");
    }
}
