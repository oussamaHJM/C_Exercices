#include<stdio.h>
#include<conio.h>
int i,n;
float mn;
void main()
{
    printf("donner le nombre des cases \n");
    scanf("%d",&n);
float t[n];
    for(i=0;i<n;i++)
    {
        printf("T[%d] = ",i);
        scanf("%f",&t[i]);
    }
    for(i=0;i<n;i++)
        printf("\n T[%d] = %.1f",i,t[i]);
mn=t[0];
for(i=0;i<n;i++)
    if(mn>t[i])
        mn=t[i];
printf(" \n le min du tableau est %.1f \n",mn);
getch();
}

