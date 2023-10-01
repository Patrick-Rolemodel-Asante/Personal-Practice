#include <stdio.h>

void main()
{
	int a[5], b[5], c[5];

	for(int i=0; i<5; i++)
	{
		printf("Enter elements of first array: ");
		scanf("%d", &a[i]);
	}
	for(int i=0; i<5; i++)
	{
		printf("Enter elements of second array: ");
		scanf("%d", &b[i]);

	}
	for(int i=0; i<5; i++)
	{	
		c[i] = (a[i]+b[i]);
		printf("c[%d] = %d\n", i, c[i]);
	}
}
