#include <stdio.h>

void main()
{
	int a[3][3], i, j, sum_row, sum_col;

	for(i=0; i<3; i++)
	{
		
		for(j=0; j<3; j++)
		{
			printf("Enter the array items: ");
			scanf("%d", &a[i][j]);
		
		}

	}

	for(j=0; j<3; j++)
	{
		sum_row=sum_col=0;
		
		for(i=0; i<3; i++)
		{
			sum_row+=a[j][i];
			sum_col+=a[i][j];
		}
		printf("sum_row=%d   sum_col=%d\n", sum_row, sum_col);
	}
}

