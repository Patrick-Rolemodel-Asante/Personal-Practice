#include <stdio.h>

void main()
{
	int a[2][3], b[2][3], c[2][3], i, j;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter the elements of the first matrix: ");
			scanf("%d", &a[i][j]);
		}	
	}
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter the elements of the second matrix: ");
			scanf("%d", &b[i][j]);
		}
	}
	
	
	printf("-----------------------------------------\n");
	printf("Printing elements of the first matrix\n");
	printf("-----------------------------------------\n");
		
	
	for(i=0; i<2; i++)
	{
		
		for(j=0; j<3; j++)
		{
			printf("\t%d", a[i][j]);
		}
		
		printf("\n");
	}
	
	printf("-----------------------------------------\n");
	printf("Printing elements of the second matrix\n");
	printf("-----------------------------------------\n");
		
	for(i=0; i<2; i++)
	{
		
		for(j=0; j<3; j++)
		{
			printf("\t%d", b[i][j]);
		}
		printf("\n");
	}
	
	
	printf("-----------------------------------------\n");
	printf("Printing elements of the third matrix\n");
	printf("-----------------------------------------\n");
		
	for(i=0; i<2; i++)
	{
		
		for(j=0; j<3; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("\t%d", c[i][j]);
		}
		printf("\n");
	}
}
