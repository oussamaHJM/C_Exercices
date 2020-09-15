#include<stdio.h>
#include<conio.h>
void trie(int *b[],int *m)
{
    int i,j,aux;
    for(i=0;i<*m-1;i++)
        for(j=i+1;j<*m;j++)
        {
            aux=*b[i];
            *b[i]=*b[j];
            *b[j]=aux;
        }
}
int t[10000],i,j,n;

