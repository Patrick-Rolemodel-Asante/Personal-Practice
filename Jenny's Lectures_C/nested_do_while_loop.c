/**
* Nesting can be done to many levels even with other loops: for and while.

*/

#include <stdio.h>

void main()
{
	int i=1, j=3;
	do
	{
		do
		{
			printf("%d\n", --j);
		}while(j>0);
		printf("%d\n",i++);
	}while(i<4);
}
