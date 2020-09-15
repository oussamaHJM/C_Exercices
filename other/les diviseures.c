#include<stdio.h>
#include<math.h>
#include<conio.h>
int p,i;
void main()
{
    printf("donner la valeur de p");
    scanf("%d",&p);
    for( i=1;i<=p;i++)
    {
        if(p%i==0)
            printf("\n %d est diviseur de %d",i,p);
    }
    puts("tapper une touche pour contunier...");
    getch();
}
