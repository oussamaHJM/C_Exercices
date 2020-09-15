#include<stdio.h>

int main()
{
    char ch[10];
    FILE * fichier;
    fichier=fopen("D:\\CODES\\2EI\\fichier\\Fichier_Configu.txt","r");
    if(fichier==NULL)
        printf("sdsdc");
    while(fgets(ch,80,fichier)!=NULL)
    {
        sscanf(ch,fichier);
        if(strstr(ch,"pv")!=NULL)
            printf("\n%s",ch);
        //(ch,80,fichier);
    }
    fclose(fichier);
    return 0;
}
