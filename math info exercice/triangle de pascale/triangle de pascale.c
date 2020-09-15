#include<stdio.h>
#include<math.h>
#include<conio.h>
int n,i,k,j,fi,fj,fij,fni;
void main()
 {
     printf("donner la val de n \n ");
     scanf("%d",&n);
     for(j=0;j<=n;j++)
     {
        for(i=0;i<=j;i++)
        {
          fi=1;
          fj=1;
          fij=1;
          for(k=1;k<=i;k++)
              fi=fi*k;
          for(k=1;k<=j;k++)
              fj=fj*k;
          for(k=1;k<s=j-i;k++)
              fij=fij*k;

          fni=fj/(fi*fij);
          printf("%d ",fni);
        }
          printf("\n");
     }
     getch();
 }
