/** 
If the the termination condition in the for loop is omitted, an infinite loop is created.
We can also give multiple conditions in the for_loop.
Note that in the case where multiple termination conditions are given, only the last condition is considered and regarded as the termination condition, the rest are just assumed to be normal statements. Key note here!
*/

#include <stdio.h>

void main()
{
	int i=0, j=0;
/*	for (; ; i++)// infinite loop here!
		printf("%d %d", i, j);
*/

	for (i=i; i<=5, j<3; j++)
		printf("%d %d\n", i, j);

}
