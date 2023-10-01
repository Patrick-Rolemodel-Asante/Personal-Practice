#include <stdio.h>

void main()
{
	float a[5], sum;
	for(int i=0; i<5; i++)
	{
		printf("Enter student marks: ");
		scanf("%f", &a[i]);
	}
	for(int i=0; i<5; i++)
		sum+=a[i];
	printf("sum = %.2f\n", sum);
	printf("avg = %.2f\n", sum/5);
}
