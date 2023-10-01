#include <stdio.h>

void main()
{
	int a[10], odd=0, even=0;
	for(int i=0; i<10; i++)
	{
		printf("Enter the numbers: ");
		scanf("%d", &a[i]);
		if(a[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("There are %d odd numbers and %d even numbers in the numbers you entered\n", odd, even);
}
