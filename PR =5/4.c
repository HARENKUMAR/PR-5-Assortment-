#include<stdio.h>

main()
{
	
	int row,col;
	
	printf("Enter the array's row size: ");
	scanf("%d",&row);
	printf("Enter the array's col size: ");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	printf("\n\n ARRY INPUT \n\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter a element a[%d][%d] is : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	int r,row_sum=0;
	
	printf("\n\n");
	
	printf("Enter a ROW number : ");
	scanf("%d",&r);
	
	for(j=0; j<col; j++)
	{
		printf("%d : \n",a[r][j]);
		row_sum += a[r][j];
	}
	
	printf("\n\n The sum of a ROW : %d ",row_sum);
	
	int c,col_sum=0;
	
	printf("\n\n");
	
	printf("Enter a COLUMN number : ");
	scanf("%d",&c);
	
	for(i=0; i<row; i++)
	{
		printf("%d : \n",a[i][c]);
		col_sum += a[i][c];
	}
	
	printf("\n\n The sum of a COLUMN : %d",col_sum);
}