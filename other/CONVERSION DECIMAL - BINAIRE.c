#include<conio.h>
#include<stdio.h>
#include<math.h>
int v,r,i,n,k,j;
int t[10],b[10];
void main()
{
    printf("Donnez n\n");
    scanf("%d",&n);
   k=0;
    r=n;
    do
    {
         t[k]=n%2;
         n=n/2;
         k=k+1;
    }
    while(n>0);
    h=0;
    do
    {
       b[h]=t[k-1];
       h=h+1;
       k=k-1;
    }
    while(k>=0);
    printf("\n %d = ",r);
        for(i=0;i<h-1;i++)
            printf("%d ",b[i]);

    getch();
}






}
