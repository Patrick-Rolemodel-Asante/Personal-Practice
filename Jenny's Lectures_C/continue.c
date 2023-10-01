/**
* continue is used to skip some statements in the loop 
* Note that continue is in small letters and does not start with a capital letter.
* if continue is used, then control will go to the beginning or next iteration of the loop. 
* continue literally means skip this step and everything below and start all again please.
*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a, i, sum =0, count=0;
	for(i=1; i<=5; i++)
	{
		printf("Enter a non-negative number: ");
		scanf("%d", &a);
		if(a<0)
		{
			puts("Please enter a positive number :)");
			continue;
		}
		sum+=a;
		count++;
	}
	printf("Sum of the %d non-negative numbers: %d\n",count, sum);

}
