#include<conio.h>
#include<stdio.h>
#include<math.h>
int p,q,i,m,pp;
void main()
{
    printf("donnez svp la val de p \n");
    scanf("%d",&p);
    printf("donnez svp la val de q \n");
    scanf("%d",&q);
    if(p<q)
        m=p;
    else
        m=q;
    for (i=m;i<=p*q;i++)
    {
        if((i%p==0)&&(i%q==0))
            pp=i;
            i=p*q+1;
        printf("le PPCM est%d",pp);
    }
    puts("tapper une touche pour contunier...");
    getch();
}
