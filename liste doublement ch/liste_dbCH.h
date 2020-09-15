#ifndef LISTE_DBCH_H_INCLUDED
#define LISTE_DBCH_H_INCLUDED

typedef struct element{
    int data;
    struct element* p_next;
    struct element* p_prev;

}element;

typedef struct dliste{
    int taille;
    element *p_queue;
    element *p_tete;
}dliste;

dliste *  dliste_new(void);
dliste * inverser(dliste *l);
void retirer_fin_file(dliste *l);
void vider_file(dliste *l);
dliste * append(int data,dliste *liste);
dliste * prepend(int data,dliste *liste);
dliste * insersion(int data,dliste* lliste,int pos);
void affichage(dliste* l);
#endif // LISTE_DOUBLEMENT_CHAINÈE_H_INCLUDED
