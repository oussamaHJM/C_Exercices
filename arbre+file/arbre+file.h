#ifndef ARBRE_FILE_H_INCLUDED
#define ARBRE_FILE_H_INCLUDED

typedef struct node{
    int data;
    struct node *p_fils_gauche;
    struct node *p_fils_droit;
}arbre_t;
typedef struct node noeud;

typedef struct file
{
    arbre_t *donnee;             /* La donnée que notre pile stockera. */
    struct file *p_suivant; /* Pointeur vers l'élément précédent de la pile. */
}File;

arbre_t *cree_arbre(int data,arbre_t *d,arbre_t *g);
void detruit_arbre(arbre_t *ar);
arbre_t *fils_guauche(arbre_t *ar);
arbre_t *fils_droit(arbre_t *ar);
int est_une_feuille(arbre_t *ar);
int est_une_node_interne(arbre_t *ar);
void affiche_arbre(arbre_t *ar);
int hauteur(arbre_t *ar);
int nombre_de_noeuds(arbre_t *ar);
int nombre_feilles(arbre_t *ar);
int nombre_noeud_internes(arbre_t *ar);
void inserer(arbre_t *ar);
void infix(arbre_t *ar);
void prefix(arbre_t *ar);
void postfixe(arbre_t *ar);
void traiter_largeur(arbre_t *ar);
arbre_t *generation_arbre_aliatoir(int n);
arbre_t *arbre_t_dej_gauch(int n);
arbre_t *arbre_t_dej_droit(int n);
arbre_t *insertion_abr(arbre_t *t,int val);
arbre_t *trie_abr(arbre_t *t);


#endif // ARBRE+FILE_H_INCLUDED
