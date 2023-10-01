
/**
* Infinite while loop can be achieved when instead of using the condition, assignment operator is used instead of other conditional operators and the value assigned is not zero. 
* eg: while(i=1) will produce an infinite loop
* eg: while(i=-1) will also produce an infinite loop
* Hard coding a number in the while condition where the number is anything other than zero will produce an infinite loop also.
* eg: while(1) will produce an infinite loop
* eg: while(-1) will produce same too
* When the iterative value is not initialized, then the will be no output from the while loop.
* When there is no condition given ie while(), then there will be no output.
* When the update condition is given as the condition, then there might be an infinite loop or it must end at the end of the range of the data type of the iterative value.
* If semi-colon is used after the while loop, then the exact value that made the condition false is that which will get the body of the while loop executed and then it will exit.
* Note that characters can also be used in the condition part of the while loop since their ascii code will be used instead. Note also that this won't be an infinite loop as the code will be executed only within the range of character and exits when the ascii value becomes zero.


*/

#include <stdio.h>
void main()
{
/*	int i=3;
	while(i>3);
	{
		printf("%d\n",i);
		i++;
	}
*/

char ch = 'a'; // This won't print anything since it is not initialized.
        while("%c",ch);
        {
                printf("%c = %d\n",ch, ch);
                ch++;
        }
}
