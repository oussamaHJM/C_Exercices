#include<stdio.h>
int x,y,i,ch;
int main ()
{
    printf("entre la 1ére borne d'intervale ");
    scanf ("%d",&x);
    printf("entrer la 2éme borne d'intervale");
    scanf("%d",&y);
    printf("******************* choix *************************\n");
    printf("por afficher les nombres paires tappez 1 \npour afficher les nombres impaires tappez 2  ");
    scanf("%d",&ch);
    i=x;
    while(i<=y)
    {
        if(ch==1)
        {
            if((i%2)==0)
            {
               printf("%d\n",i);
            }
        }
        else
        {
            if(ch==2)
            {
                if(i%2!=0)
                {
                    printf("%d\n",i);
                }
            }
        }
        i++;
    }
    return 0;
}
