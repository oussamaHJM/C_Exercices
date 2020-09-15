#include<stdio.h>
#include<math.h>
int T[20],j,n,i,drp,s;
void main()
{
    printf("Donnez n\n");
    scanf("%d",&n);
      for(i=0;i<n;i++)
    {
        printf("T[%d]",i);
        scanf("%d",&T[i]);
    }
    for(i=0;i<n;i++)
        printf("\n T[%d]=%d",i,T[i]);
    s=0;
    for(i=0;i<n;i++)
        {
            drp=0;
            for(j=2;j<T[i]-1;j++)
              {
                if(T[i]%j==0)
                    drp=1;
              }
            if(drp==0)
                s=s+T[i];
        }
        s=s;
        printf("\nS=%d",s);
      }
