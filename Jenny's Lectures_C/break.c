/**
* break statement is used only in loops: for, while and do while and switch. If used anywhere apart from the listed places, it throws an error.
* break statement is used to exit out of a loop.
*/

#include <stdio.h>

void main()
{
	int a, i, sum=0; //initialize sum else you'll get a garbage value which may affect your sum value.
	for(i=1; i<=5; i++)
	{
		printf("Enter a non-negative number: ");
		scanf("%d", &a);
		if(a<0)	
			break;
		sum +=a;
	}
	printf("Sum of the non-negative numbers = %d\n", sum);
}
