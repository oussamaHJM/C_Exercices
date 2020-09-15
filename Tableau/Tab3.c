#include<stdio.h>
#include<conio.h>
 int T[20],i,j,aux,r;
void main()
{
    do
    {
         for(i=0;i<20;i++)
        {
            printf("T[%d]",i);
            scanf("%d",&T[i]);
        }
        printf("\n affichage du tableau\n");
        for(i=0;i<20;i++)
            printf("\n T[%d]=%d",i,T[i]);
         printf("\n TRIE CROISSANT\n");
         for(i=0;i<19;i++)
             for(j=i+1;j<20;j++)
                if(T[i]>T[j])
             {
                 aux=T[i];
                 T[i]=T[j];
                 T[j]=aux;
             }
        for(i=0;i<20;i++)
            printf("\n T[%d]=%d",i,T[i]);
             printf("\n TRIE DECROISSANT\n");
         for(i=0;i<19;i++)
             for(j=i+1;j<20;j++)
                if(T[i]<T[j])
             {
                 aux=T[i];
                 T[i]=T[j];
                 T[j]=aux;
             }
        for(i=0;i<20;i++)
            printf("\n T[%d]=%d",i,T[i]);
    printf("\nDonnez votre choix\n");
    scanf("%d",&r);
    }
    while(r==1);
getch();
}
