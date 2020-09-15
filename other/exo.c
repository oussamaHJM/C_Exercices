#include<stdio.h>
#include<conio.h>
int r,n,i,j,h,k;
int t[100],b[1000];
void main()
{
    printf("donne la valeur du nbr en decimale");
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
