#include<stdio.h>
#include<conio.h>
int n,d,i,j,k;
void main()
{
    printf("Donnez n\n");
    scanf("%d",&n);
    for(j=1 ; j<=n ; j++)
    {
        d=0;
        for(k=2 ; k<j ; k++)
            if(j%k==0)
            {
                d=1;
                k=j+2;
            }
        if(d==0)
            printf("%d\n",j);
}
}
