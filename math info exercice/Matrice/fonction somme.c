#include<stdio.h>
#include<conio.h>
int x,y,c;
int somme(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
int produit(int a,int b)
{
    int p;
    p=a*b;
    return p;
}
void trie(int a,int b)
{
    if(a>b)
        printf("\n %d<%d",b,a);
    else
        printf("\n %d<%d",b,a);
}
void main()
{
    printf("\n donner la valeur de X");
    scanf("%d",&x);
    printf("\n donner la valeur de Y");
    scanf("%d",&y);
    printf("\n  1)-somme \n  2)-produit \n  3)-trie");
    printf("\n entrer votre choix");
    scanf("%d",&c);
    switch(c)
    {
        {
        case 1:
            printf("\n la somme est %d",somme(x,y));
        }break;
        {
        case 2:
            printf("\n le produit est %d",produit(x,y));
        }break;
        {
        case 3:
            trie(x,y);
        }break;
        default :
            printf("choix incorrect");
    }
    getch();
}
