#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *p_next; // p_next pointera vers l'�l�ment suivant (ou NULL s'il s'agit du dernier �l�ment de la liste)
    struct node *p_prev; // p_prev pointera vers l'�l�ment pr�c�dent (ou NULL s'il s'agit du premier �l�ment)
}Node;

typedef struct file_sl
{
    size_t taille;
    struct node *p_queue;
    struct node *p_tete;
} File_dl;


File_dl *file_dl_cree(void)
{
    File_dl *p_new = malloc(sizeof *p_new);
    if (p_new != NULL)
    {
        p_new->taille = 0;
        p_new->p_tete = NULL;
        p_new->p_queue = NULL;
    }
    return p_new;
}

File_dl *file_dl_ajouter_debut(File_dl *p_file, int data){
    if (p_file != NULL) /* On v�rifie si notre liste a �t� allou�e */
    {
        struct node *p_new = malloc(sizeof *p_new); /* Cr�ation d'un nouveau node */
        if (p_new != NULL) /* On v�rifie si le malloc n'a pas �chou� */
        {
            p_new->data = data; /* On 'enregistre' notre donn�e */
            p_new->p_next = NULL; /* On fait pointer p_next vers NULL */
            p_new->p_prev = NULL; /* On fait pointer p_prev vers NULL  */
            if (p_file->p_queue == NULL) /* Cas o� notre liste est vide (pointeur vers fin de liste �  NULL) */
            {
                p_new->p_prev = NULL; /* On fait pointer p_prev vers NULL */
                p_file->p_tete = p_new; /* On fait pointer la t�te de liste vers le nouvel �l�ment */
                p_file->p_queue = p_new; /* On fait pointer la fin de liste vers le nouvel �l�ment */
            }
            else /* Cas o� des �l�ments sont d�j� pr�sents dans notre liste */
            {
                p_file->p_queue->p_next = p_new; /* On relie le dernier �l�ment de la liste vers notre nouvel �l�ment (d�but du cha�nage) */
                p_new->p_prev = p_file->p_queue; /* On fait pointer p_prev vers le dernier �l�ment de la liste */
                p_file->p_queue = p_new; /* On fait pointer la fin de liste vers notre nouvel �l�ment (fin du cha�nage: 3 �tapes) */
            }
            p_file->taille++; /* Incr�mentation de la taille de la liste */
        }
    }
    return p_file; /* on retourne notre nouvelle liste */
}

int file_dl_retirer_fin(File_dl *p_file){
    if (p_file != NULL){ /* On v�rifie si notre liste a �t� allou�e */
        Node *p_temp = p_file->p_queue;
        int ret = 0;
        if(p_temp!=NULL){ /* On v�rifie si notre liste contient des element */
            if(p_temp->p_prev==NULL) /* si un seul elm dans la file */
                p_file->p_queue = p_file->p_tete = NULL;
            else{
                p_file->p_queue = p_temp->p_prev;
                p_file->p_queue->p_next = NULL;
            }
            ret = p_temp->data;
            free(p_temp);
            p_file->taille--;
            return ret;
        }
        printf("Liste Vide\n");
        return 0;
    }
    printf("Liste non cree\n");
    return 0;
}


void file_dl_afficher(File_dl *p_file)
{
    if (p_file != NULL)
    {
        printf("TETE <-> ");
        struct node *p_temp = p_file->p_tete;
        while (p_temp != NULL)
        {
            printf("%d <-> ", p_temp->data);
            fflush(stdout);
            p_temp = p_temp->p_next;
        }
        printf("QUEUE\n");
    }
    else
        printf("LISTE VIDE\n");
}



int main()
{
    File_dl *p_file = NULL;
    p_file = file_dl_cree();
    int donnee, i=0;
    while(i<3){
        printf("\nDonner un element a inserer a la file : ");
        scanf("%d",&donnee);
        file_dl_ajouter_debut(p_file,donnee);
        i++;
        file_dl_afficher(p_file);
    }
    printf("\nTaille est : %d\n",p_file->taille);
    file_dl_afficher(p_file);

    i=0;
    int ret;
    while(i<5){

        ret = file_dl_retirer_fin(p_file);
        if(ret==0)
            printf("Liste Vide");
        else
            printf("\nElement traite (%d) : %d\n",i,ret);
        i++;
        file_dl_afficher(p_file);


    }
    return 0;
}
