/* DATE   : LE 09/03/2017
 * AUTEUR : Oussama EL-HAJJAM
 * OBJET  : Listes Doublement Chainées  (ISGA SETTAT)
 */
#include "listeDoubleChainee.h"


Dlist *dlist_cree(void)
{
    Dlist *p_nouv = malloc(sizeof *p_nouv);
    if (p_nouv != NULL)
    {
        p_nouv->taille = 0;
        p_nouv->p_tete = NULL;
        p_nouv->p_queue = NULL;
    }
    return p_nouv;
}

Dlist *dlist_ajout_fin(Dlist *p_liste, int donnee)
{
    if (p_liste != NULL) /* On vérifie si notre liste a été allouée */
    {
        Noeud *p_nouv = malloc(sizeof *p_nouv); /* Création d'un nouveau noeud */
        if (p_nouv != NULL) /* On vérifie si le malloc n'a pas échoué */
        {
            p_nouv->donnee = donnee; /* On 'enregistre' notre donnée */
            p_nouv->p_suivant = NULL; /* On fait pointer p_suivant vers NULL */
            if (p_liste->p_queue == NULL) /* Cas où notre liste est vide (pointeur vers fin de liste à  NULL) */
            {
                p_nouv->p_precedent = NULL; /* On fait pointer p_precedent vers NULL */
                p_liste->p_tete = p_nouv; /* On fait pointer la tête de liste vers le nouvel élément */
                p_liste->p_queue = p_nouv; /* On fait pointer la fin de liste vers le nouvel élément */
            }
            else /* Cas où des éléments sont déjà présents dans notre liste */
            {
                p_liste->p_queue->p_suivant = p_nouv; /* On relie le dernier élément de la liste vers notre nouvel élément (début du chaînage) */
                p_nouv->p_precedent = p_liste->p_queue; /* On fait pointer p_precedent vers le dernier élément de la liste */
                p_liste->p_queue = p_nouv; /* On fait pointer la fin de liste vers notre nouvel élément (fin du chaînage: 3 étapes) */
            }
            p_liste->taille++; /* Incrémentation de la taille de la liste */
        }
    }
    return p_liste; /* on retourne notre nouvelle liste */
}

Dlist *dlist_ajout_debut(Dlist *p_liste, int donnee)
{
    if (p_liste != NULL)
    {
        Noeud *p_nouv = malloc(sizeof *p_nouv);
        if (p_nouv != NULL)
        {
            p_nouv->donnee = donnee;
            p_nouv->p_precedent = NULL;
            if (p_liste->p_queue == NULL)
            {
                p_nouv->p_suivant = NULL;
                p_liste->p_tete = p_nouv;
                p_liste->p_queue = p_nouv;
            }
            else
            {
                p_liste->p_tete->p_precedent = p_nouv;
                p_nouv->p_suivant = p_liste->p_tete;
                p_liste->p_tete = p_nouv;
            }
            p_liste->taille++;
       }
    }
    return p_liste;
}

Dlist *dlist_inserer(Dlist *p_liste, int donnee, int position)
{
    if (p_liste != NULL)
    {
        Noeud *p_temp = p_liste->p_tete;
        int i = 1;
        while (p_temp != NULL && i <= position)
        {
            if (position == i)
            {
                if (p_temp->p_suivant == NULL)
                {
                    p_liste = dlist_ajout_fin(p_liste, donnee);
                }
                else if (p_temp->p_precedent == NULL)
                {
                    p_liste = dlist_ajout_debut(p_liste, donnee);
                }
                else
                {
                    Noeud *p_nouv = malloc(sizeof *p_nouv);;
                    if (p_nouv != NULL)
                    {
                        p_nouv->donnee = donnee;
                        p_temp->p_precedent->p_suivant = p_nouv;
                        p_nouv->p_precedent = p_temp->p_precedent;
                        p_nouv->p_suivant = p_temp;
                        p_liste->taille++;
                    }
                }
            }
            else
            {
                p_temp = p_temp->p_suivant;
            }
            i++;
        }
    }
    return p_liste;
}

void dlist_liberer(Dlist **p_liste)
{
    if (*p_liste != NULL)
    {
        Noeud *p_temp = (*p_liste)->p_tete;
        while (p_temp != NULL)
        {
            Noeud *p_del = p_temp;
            p_temp = p_temp->p_suivant;
            free(p_del);
        }
        free(*p_liste), *p_liste = NULL;
    }
}

void dlist_afficher(Dlist *p_liste)
{
    if (p_liste != NULL)
    {
        printf("TETE <-> ");
        Noeud *p_temp = p_liste->p_tete;
        while (p_temp != NULL)
        {
            printf("%d <-> ", p_temp->donnee);
            fflush(stdout);
            p_temp = p_temp->p_suivant;
        }
        printf("QUEUE\n");
    }
    else
        printf("LISTE VIDE\n");
}

/** \brief Supprimer un élément selon sa valeur
 *
 * \param
 * \param
 * \return
 *
 */

Dlist *dlist_effacer(Dlist *p_liste, int donnee)
{
    if (p_liste != NULL)
    {
        Noeud *p_temp = p_liste->p_tete;
        int found = 0;
        while (p_temp != NULL && !found)
        {
            if (p_temp->donnee == donnee)
            {
                if (p_temp->p_suivant == NULL) //l'élément se trouve en fin de liste
                {
                    p_liste->p_queue = p_temp->p_precedent;
                    p_liste->p_queue->p_suivant = NULL;
                }
                else if (p_temp->p_precedent == NULL) // l'élément se trouve en début de liste
                {
                    p_liste->p_tete = p_temp->p_suivant;
                    p_liste->p_tete->p_precedent = NULL;
                }
                else //l'élément se trouve en milieu de liste
                {
                    p_temp->p_suivant->p_precedent = p_temp->p_precedent;
                    p_temp->p_precedent->p_suivant = p_temp->p_suivant;
                }
                free(p_temp);
                p_liste->taille--;
                found = 1;
            }
            else
            {
                p_temp = p_temp->p_suivant;
            }
        }
    }
    return p_liste;
}

Dlist *dlist_effacer_tout(Dlist *p_liste, int donnee)
{
    if (p_liste != NULL)
    {
        Noeud *p_temp = p_liste->p_tete;
        while (p_temp != NULL)
        {
            if (p_temp->donnee == donnee)
            {
                Noeud *p_del = p_temp;
                p_temp = p_temp->p_suivant;
                if (p_del->p_suivant == NULL)
                {
                    p_liste->p_queue = p_del->p_precedent;
                    p_liste->p_queue->p_suivant = NULL;
                }
                else if (p_del->p_precedent == NULL)
                {
                    p_liste->p_tete = p_del->p_suivant;
                    p_liste->p_tete->p_precedent = NULL;
                }
                else
                {
                    p_del->p_suivant->p_precedent = p_del->p_precedent;
                    p_del->p_precedent->p_suivant = p_del->p_suivant;
                }
                free(p_del);
                p_liste->taille--;
            }
            else
            {
                p_temp = p_temp->p_suivant;
            }
        }
    }
    return p_liste;
}

Dlist *dlist_effacer_pos(Dlist *p_liste, int position)
{
    if (p_liste != NULL)
    {
        Noeud *p_temp = p_liste->p_tete;
        int i = 1;
        while (p_temp != NULL && i <= position)
        {
            if (position == i)
            {
                if (p_temp->p_suivant == NULL)
                {
                    p_liste->p_queue = p_temp->p_precedent;
                    p_liste->p_queue->p_suivant = NULL;
                }
                else if (p_temp->p_precedent == NULL)
                {
                    p_liste->p_tete = p_temp->p_suivant;
                    p_liste->p_tete->p_precedent = NULL;
                }
                else
                {
                    p_temp->p_suivant->p_precedent = p_temp->p_precedent;
                    p_temp->p_precedent->p_suivant = p_temp->p_suivant;
                }
                free(p_temp);
                p_liste->taille--;
            }
            else
            {
                p_temp = p_temp->p_suivant;
            }
            i++;
        }
    }
    return p_liste;
}

size_t dlist_taille(Dlist *p_liste)
{
    size_t ret = 0;
    if (p_liste != NULL)
    {
        ret = p_liste->taille;
    }
    return ret;
}

Dlist *dlist_inverser(Dlist *p_liste)
{
    Dlist *ret = NULL;
    if (p_liste != NULL)
    {
        Noeud *p_temp = p_liste->p_queue;
        ret = dlist_cree();
        while (p_temp != NULL)
        {
            ret = dlist_ajout_fin(ret, p_temp->donnee);
            p_temp = p_temp->p_precedent;
        }
    }
    return ret;
}
