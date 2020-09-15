#include<stdio.h>
int t1[20],t2[20],n,i,j,a,drp,r;
main()
{
    printf("Donne n`\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("t1[%d]",i);
        scanf("%d",&t1[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("t2[%d]",i);
        scanf("%d",&t2[i]);
    }
    a=t1[0]%t2[0];
    if(a==0)
    {
        r=t1[0]/t2[0];
        drp=0;
        j=0;
        do
        {
            if(r!=(t1[j]/t2[j]))
                drp=1;
            j++;
        }
        while((j<n)&&(drp==0));
    if(drp==0)
        printf("\nt1 est multiple de t2\n");
    else
        printf("Les deux vecteurs sont distincts\n");
    }
        else
        {
            a=t2[0]%t1[0];
            if(a!=0)
                printf("Les deux vecteurs sont distinctes\n");
            else
            {
                r=t2[0]/t1[0];
                drp=0;
                j=0;
                do
                {
                if(r!=(t2[j]/t1[j]))
                    drp=1;
                j++;
                }
                while((j<n)&&(drp==0));
            }
            if(drp==0)
                printf("\nt2 est multiple de t1\n");
            else
                printf("Les deux vecteurs sont distinctes\n");

        }
}
