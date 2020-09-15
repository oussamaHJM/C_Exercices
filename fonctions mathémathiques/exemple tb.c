#include<stdio.h>
int t[12];
int n,i,ch,ox;
main()
{
    printf("donner le n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    printf("************ affichage ***********************\n");
    for(i=0;i<n;i++)
    {
        printf("t[%d] = %d\n",i+1,t[i]);
    }
    printf("donner le nombre a ajouter ");
    scanf("%d",&ch);
    for(i=n;i<n+1;i++)
    {
        t[i]=ch;
    }
    printf("************ affichage ***********************\n");
    for(i=0;i<n+1;i++)
    {
        printf("t[%d] = %d\n",i+1,t[i]);
    }
    for(i=n+1;i>0;i--)
    {
        ox=t[i-1];
        t[i-1]=t[i];
        t[i]=ox;
    }
    t[0]=ch;
    printf("************ affichage ***********************\n");
    for(i=0;i<n+1;i++)
    {
        printf("t[%d] = %d\n",i+1,t[i]);
    }
}
