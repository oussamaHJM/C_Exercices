#include<stdio.h>
int px,cont,ptt;
main()
{
    FILE * prix;
    FILE * contit;
    prix=fopen("prix.txt","r");
    contit=fopen("cont.txt","r");
    printf("%d",ptt);
    while(!feof(prix)&&!feof(contit))
    {
    	fscanf(prix,"%d",&px);
		fscanf(contit,"%d",&cont);
		ptt=ptt+(px*cont);
	}
	printf("le prix totale est %d",ptt);
    fclose(prix);
    fclose(contit);
    
}
