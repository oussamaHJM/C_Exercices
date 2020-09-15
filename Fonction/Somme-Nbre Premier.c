#include<stdio.h>
#include<conio.h>
void lec(int T[], int n)
{
    int i;
     for(i=0;i<n;i++)
    {
        printf("T[%d]",i);
        scanf("%d",&T[i]);
    }
}
void aff(int T[], int n)
{
    int i;
     for(i=0;i<n;i++)
         printf("\n T[%d]=%d",i,T[i]);
}
void Sp(int *n,int T[])
    {
        int j,i,drp,s;
       s=0;
        for(i=0;i<*n;i++)
        {
            drp=0;
            for(j=2;j<T[i]-1;j++)
              {
                if(T[i]%j==0)
                    drp=drp+1;
              }
            if(drp==0)
                s=s+T[i];
        }
        s=s;
      }
int B[20],N,S,k;
void main()
{
    lec(B,N);
    aff(B,N);
    printf("Somme=%d",Sp(B,&N));
}
