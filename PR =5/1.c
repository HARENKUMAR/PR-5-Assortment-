#include<stdio.h>

main()
{
	
	int size;
	
	printf("Enter a any number : ");
	scanf("%d",&size);
	
	int a[size];
	int i;
	
	printf("\n\n ARRY INPUT \n\n");
	
	for(i=0; i<size; i++)
	{
		printf("Enter a elements is a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	printf("\n\n ARRY OUTPUT \n\n");
	
	for(i=0; i<size; i++)
	{
		  if(a[i]<0)
		{
			printf("Negative elements from an Array : %d ",a[i]);
		}		
	}
}
	