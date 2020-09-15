#include<stdio.h>
#include<conio.h>
int r,n,i,j,h,drp;
int t[1000];
void main()
{
    do
    {
        printf("dne la valeur du nbr entier n ");
        scanf("%d",&n);
    }
    while(n<0);
    r=n;
    i=2;
    h=0;
    do
    {
        drp=0;
        for(j=2;j<i-1;j++)
            if((i%j)==0)
                drp=1;
        if(drp==0)
        do
        {

            if(n%i==0)
            {
                t[h]=i;
                printf("%d\n",t[h]);
                n=n/i;
                h=h+1;
            }
        }
        while(n%i==0);
        i=i+1;
    }
    while(n>1);
    printf("\n %d = ",r);
    for(i=0;i<h-1;i++)
        printf("%d * ",t[i]);
    i=h-1;
    printf("%d  ",t[i]);
    getch();
}
