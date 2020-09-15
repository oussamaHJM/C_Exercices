#include<stdio.h>
#include<math.h>
#include<conio.h>
int A,B,C,S,P;
void main()
{
    printf("Donnez A\n");
    scanf("%d",&A);
    printf("Donnez B\n");
    scanf("%d",&B);
    printf("Donnez C\n");
    scanf("%d",&C);
    S=A+B+C;
    P=A*B*C;
    if(A%3==0)
    printf("%d est multiple de 3\n",A);
    if(B%3==0)
    printf("%d  est multiple de 3\n",B);
    if(C%3==0)
    printf("%d  est multiple de 3\n",C);
    puts("Tapez sur une touche pour continuer");
    getch();
}
