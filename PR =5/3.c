#include<stdio.h>

main()
{
	
	int row,col;
	
	printf("Enter the array's row size: ");
	scanf("%d",&row);
	printf("Enter the array's column size: ");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;

	
	
	printf("\n\n ARRY INPUT \n\n");
	
	for(i=0; i<row; i++)
	{
	     for(j=0; j<col; j++)
		{
			printf("Enter a elements a[%d][%d] is : ",i,j);
		    scanf("%d",&a[i][j]);
		}
        	printf("\n");	
	}
	
	printf("\n\n The transpose matrix of an array \n\n");
	
	for(i=0; i<row; i++)
	{
	     for(j=0; j<col; j++)
		{
	      printf("%d",a[j][i]);
	    }
	   printf("\n"); 
	}
	
    printf("\n\n");	
    
}