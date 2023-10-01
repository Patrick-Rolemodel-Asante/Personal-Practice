#include <stdio.h>

void times_table(int n)
{
	for (int i=1; i<13; i++)
		printf("%d * %2d = %3d\n", n, i, n*i);
}

void main()
{
	int num;
	printf("Enter your number: ");
	scanf("%d", &num);
	times_table(num);
}
