#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED
typedef struct file{
    int data;
    struct file* suivant;
}file;

void inserer_n_elm1( file** p,int data);
void afficher(file* f);
void file_equeue(file**p,int donnee);
int file_pop(file**p_pile);
#endif // FILE_H_INCLUDED
