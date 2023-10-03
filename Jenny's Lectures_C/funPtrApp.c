#include <stdio.h>

void add(int a, int b){ printf("%d\n", a+b); }

void sub(int a, int b){ printf("%d\n", a-b); }

void mult(int a, int b){ printf("%d\n", a*b); }

void div(int a, int b){ printf("%d\n", a/b); }

int main()
{
	int choice, a, b;
 	void (*fptr[4])(int, int) = {add, sub, mult, div};

	printf("0) --> addition\n1) --> subtraction\n2) --> multiplication\n3) --> division\nWhat will you have me do please: ");
	scanf("%d", &choice);

	printf("\nEnter the two values for this: ");
	scanf("%d %d", &a, &b);

	(fptr[choice])(a,b);

	return (0);
}
