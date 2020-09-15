#include<stdio.h>
main()
{
    FILE * mat1;
    FILE * mat2;
    FILE * mat;
    mat1=fopen("mat1.txt","r");
    mat2=fopen("mat2.txt","r");
    mat=fopen("matricesomme.txt","w");
    int i,j,n1,n2,s;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		fscanf(mat1,"%d",&n1);
		    fscanf(mat2,"%d",&n2);
		    fprintf(mat1,"%d",n1);
		    fprintf(mat2,"%d",n2);
		    s=n1+n2;
			fprintf(mat,"%d\n",s);
		}
    	
	}
	//system("dir");
    fclose(mat);
    fclose(mat2);
	fclose(mat1);
    
}
