#include<stdio.h>
#include<conio.h>
int n,Fi,i,j,k,Fj,Fji,c;
void main()
{

    printf("Donnez n\n");
    scanf("%d",&n);
    for(j=0 ; j<=n ; j++)
    {
       for(i=0 ; i<=j ; i++)
       {
           if(i==j || i==0)
            c=1;
           else
            {
                Fi=1;
                Fj=1;
                Fji=1;
                for(k=1 ; k<=i ; k++)
                    Fi=Fi*k;
                for(k=1 ; k<=j ; k++)
                    Fj=Fj*k;
                for(k=1 ; k<=(j-i) ; k++)
                    Fji=Fji*k;
            c=(Fj)/(Fi*Fji);
            }
        printf("%d\t",c);
        }
      printf("\n");

    }
    printf("Pour continuer Tapez sur une touche");
    getch();
}
