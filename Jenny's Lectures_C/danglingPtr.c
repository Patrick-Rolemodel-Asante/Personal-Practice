#include <stdio.h>
#include <stdlib.h>

int* f()
{
	int a = 9; // scope of a is in this function only. To still get the value of a outside this function, we need to declare it as static int a = 9; 

	return (&a);
}

int main()
{

/*** Program 1 to illustrate dangling pointer --> Illustrate dangling pointer as a result of freeing the pointer
	int *ptr = (int *)malloc(sizeof(int)); // allocate memory dynamically
	*ptr = 20;

	printf("%d\n", *ptr);

	free(ptr); // freeing the pointer ie deallocating the ptr
	ptr = NULL; 

//	printf("%d\n", *ptr); // segmentation fault

***/



/*** Program 2 to illustrate dangling ptr --> Illustrate dangling pointer as a result of trying to access a local variable that was deleted after the function returns its value

	int *ptr = f();

	printf("%d\n", *ptr); // segmentation fault cause this is a dangling pointer.


***/


/*** Program 3 to illustrate dangling pointer --> as a result of trying to access a pointer (can be null also) after the variable it points to have been deleted by the stack as the block ends ***/

	int *ptr = NULL;
	{
		int a = 5;
		ptr = &a;
		printf("%d\n", *ptr); // ptr can be deferenced in this block
	}

        printf("%d\n", *ptr); // ptr cannot be deferenced after the above block but hey you may get the correct value also ie by luck. Note that this is strictly unpredictable behavior, it can't be relied on

	return(0);

}
