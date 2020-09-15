#include<stdio.h>
#include<math.h>
#include<conio.h>
int n,i,j,k,drp;
void main()
{
    printf("donner la valeur de \n");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        drp=0;
        for (k=2;k<j;k++)
        {
            if(j%k==0)
            {
                drp=1;
                i=j+1;
            }
        }
        if(drp==0)
            printf("\n %d",j);
    }
    getch();

}
