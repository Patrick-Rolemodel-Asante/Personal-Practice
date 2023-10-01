#include <stdio.h>

void main()
{
	int i=0, j=1;
	while(i<3)
	{
		while(j<=3)
			printf("%d\n", j++);// the value of j=4 never changes even after the first iteration of the outer while loop
		printf("%d\n",i++);
	}
}
