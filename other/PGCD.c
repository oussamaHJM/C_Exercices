#include<stdio.h>
#include<math.h>
#include<conio.h>
int p,q,i,mn,pg;
void main()
{
    printf("donnez svp la val de p \n");
    scanf("%d",&p);
    printf("donnez svp la val de q \n");
    scanf("%d",&q);
    if(p<q)
        mn=p;
    else
        mn=q;
    for(i=1;i<=mn;i++)
    {
      if((p%i==0)&&(q%i==0))
          pg=i;
          printf("\n le pgcd est %d et %d est=%d",p,q,pg);
    }
    puts("\n tapper une touche pour contunier ...");
    getch();
}
