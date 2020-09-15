#include<stdio.h>
#include "pile.h"


int main()
{






}

void pile_push(int v,pile* p_pile)
{
    pile* p_nouveau=malloc(siseof*p_nouveau);
    if(p_nouveau!=NULL)
    {
        p_nouveau->data=v;
        p_nouveau->p_precedent=p_pile;
        *p_pile=p_nouveau;
    }

}

