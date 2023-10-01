/**
* While loop is an entry control loop ie the condition is checked first befor the loop gets started.
* The syntax is :
		initialization variable
		while (termination condition)
		{
			body of while loop
			update expression
		}
* The process of execution starts from initialization, then termination condition is checked, then body of the loop is executed, then update expression is executed the process starts again, this time from the termination condition check. This process repeats itself till the termination condition becomes false.
*/

#include <stdio.h>
int i = 1, num;
void times_table(int n)
{
	while(i<13)
	{
		printf("%d * %2d = %3d\n", n, i, n*i);
		++i;
	}
}

void main ()
{
	printf("Enter your number: ");
	scanf("%d", &num);
	times_table(num);
}
