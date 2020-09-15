#include<stdio.h>
main()
{
    FILE * mat1;
    FILE * mat2;
    FILE * mat;
    mat1=fopen("mat1.txt","r");
    mat2=fopen("mat2.txt","r");
    mat=fopen("matricesomme1.txt","w");
    int i,j,n1,n2;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		fscanf(mat1,"%d",&n1);
		    fscanf(mat2,"%d",&n2);
			fprintf(mat,"%d ",n1+n2);
		}
		fprintf(mat,"\n");
	}
	//system("dir");
    fclose(mat);
    fclose(mat2);
	fclose(mat1);
    
}
