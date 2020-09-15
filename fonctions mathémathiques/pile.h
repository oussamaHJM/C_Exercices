#ifndef pile_H // pour éviter les inclusion multiples
#define pile_H


typedef struct pile{
    int data;
    struct liste* p_precedent;
}pile;

void pile_push(int v,pile* p_pile);
int pile_pop(pile **p_pile);
void pile_clear(pile* p_pile);

#endif
