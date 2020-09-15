#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
int i,j,n,cde,vh,c;
struct module
{
    int cde;
    char nom[10];
    int coef;
    int vh;
};
struct module t[300],aux;
void main()
{
    printf("\n donner le nombre de module");
    scanf("\n %d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n T[%d].cde",i);
        scanf("\n %d",&t[i].cde);
        printf("\n T[%d].nom",i);
        scanf("\n %s",&t[i].nom);
        printf("\n T[%d].coef",i);
        scanf("\n %d",&t[i].coef);
        printf("\n T[%d].vh",i);
        scanf("\n %d",&t[i].vh);
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",t[i].cde);
        printf("\n %d",t[i].nom);
        printf("\n %d",t[i].coef);
        printf("\n %d",t[i].vh);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(t[i].nom,t[j].nom)==0)
            {
                aux,t[i];
                t[i],t[j];
                t[j],aux;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",t[i].cde);
        printf("\n %s",t[i].nom);
        printf("\n %d",t[i].coef);
        printf("\n %d",t[i].vh);
    }
    for(i=0;i<n;i++)
    {
        if(t[i].vh>=60)
            {
                if(t[i].coef==2)
                    printf("\n %s",t[i].nom);
            }
    }
    for(i=0;i<n;i++)
    {
        printf("\n donner le code du module a modifier");
        scanf("\n %d",cde);
        for(i=0;i<n;i++)
        {
            if(t[i].cde==cde)
                {printf("\n *******existe*******");
                 printf("\n donner le nouveau volume horraire");
                 scanf("\n %d",&vh);
                 t[i].vh=vh;}
        }
    }
    c=0;
    for(i=0;i<n;i++)
    {
        if(t[i].coef==3)
        {
            c++;
        }
    }
    printf("\n %d",c);

puts("\n tapper une touche pour continuer ....");
getch();
}

