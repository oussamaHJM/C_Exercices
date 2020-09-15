#include<conio.h>
#include<stdio.h>
#include<math.h>
int s,v,i,n,r,p,drp;
int T[20];
void main()
{
    printf("Donnez n\n");
    scanf("%d",&n);
    v=0;
    r=n;
    p=2;
    do
    {
        drp=0;
		for(i=2;i<p-1;i++)
        {
            if(p%i==0)
                drp=1;
        }
        if(drp==0)
        {
             do
            {
                if((n%p)==0)
                {
                    T[v]=p;
                    printf("%d\n",T[v]);
                    v=v+1;
                    n=n/p;
                }
            }
            while((n%p)==0);
        }
    p=p+1;
    }
    while(n>1);
    n=r;
    printf("%d=",n);
    for(i=0;i<v-1;i++)
        printf("%d*",T[i]);
    i=v-1;
    printf("%d",T[i]);
    puts("\n tapper une touche pour continuer ....");
    getch();
}
