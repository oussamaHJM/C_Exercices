#include<stdio.h>
#include<conio.h>
int i,j,n,ch,k,t[13][13];
int ci,cj,cij,cji;
main()
{
        printf("donner le n \n");
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {

            for(j=0;j<(i+1);j++)
            {
                ci=1;
            cj=1;
            cji=1;
                for(k=1;k<=i;k++)
                {
                    ci=ci*k;
                }
                for(k=1;k<=j;k++)
                {
                    cj=cj*k;
                }
                for(k=1;k<=(i-j);k++)
                {
                    cji=cji*k;
                }
                cij=ci/(cj*cji);
                printf("%d  ",cij);
            }
            printf("\n");
        }
}
