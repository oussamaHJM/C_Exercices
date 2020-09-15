#include<stdio.h>
#include<math.h>
#include<conio.h>
int p,i,drp;
void main()
{
    printf("donnez svp la valeur de p \n");
    scanf("%d",&p);
    drp=0;
    for (i=2;i<p;i++)
    {
        if(p%i==0)
        {
            drp=1;
            i=p+1;
        }
    }
    if(drp==0)
        printf("l'element est premier \n");
    else
        printf("l'element n'est pas premier \n");
    puts("tapper une touche pour contunier...");
    getch();
}
