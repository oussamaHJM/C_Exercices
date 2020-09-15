#include<stdio.h>
#include<conio.h>
float T[20],maxi,mini;
int i;
void main()
{
     for(i=0;i<20;i++)
    {
        printf("T[%d]",i);
        scanf("%f",&T[i]);
    }
    printf("\n affichage du tableau\n");
    for(i=0;i<20;i++)
        printf("\n T[%d]=%f",i,T[i]);
    maxi=T[0];
    for(i=0;i<20;i++)
        if(maxi<T[i])
            maxi=T[i];
    printf("\nLe maximum est MAX=%f",maxi);
    mini=T[0];
    for(i=0;i<20;i++)
        if(mini>T[i])
            mini=T[i];
    printf("\nLe maximum est MIN=%f",mini);
    getch();
}

