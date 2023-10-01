/**
* Note that loops are used when there is a repetition to be done.
* Always put whatever you want to repeat in a loop.
*/

#include <stdio.h>

void main()
{
	int i, j;
	char pattern = '*';
	for(i=1; i<=6; i++)
	{
		for(j=1; j<=i; j++)
		{
			putchar(pattern);
		}
		printf("\n");
	}
}
