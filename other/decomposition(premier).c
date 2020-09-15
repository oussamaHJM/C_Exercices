#include<stdio.h>
#include<math.h>
#include<conio.h>
int r,v,i,p,n,drp,d[100];
void main()
{
    do
    {printf("donner le nombre");
     scanf("%d",&n);
     v=0;
     r=n;
     p=2;
    }
    while(n>100);
    do
    {
        drp=0;
        for(i=2;i<p-1;i++)
        {
            if((p%i)==0)
                drp=1;
        }
        if(drp==0)
        {
            do
            {
                if((n%p)==0)
                {
                    d[v]=p;
                    v=v+1;
                    n=n/p;
                }
            }
            while((n%p==0));
        }
        p=p+1;
    }
    while(n>1);
    n=r;
    printf("n=\n");
    for(i=0;i<v;i++)
    {
        printf("\n %d",d[i]);
    }
    puts("\n tapper une touche pour continuer ....");
    getch();
}

