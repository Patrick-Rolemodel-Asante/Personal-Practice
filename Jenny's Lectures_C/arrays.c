/**
* Arrays are collections of items or values or literals of the same data type.
* Arrays are needed when we want to store multiple values or data of the same data type under a single collective name.
* Arrays can be declared using the following:
* data_type name[size_of_array];
* The size of can be an expression or a macro but not a variable.
* Also, the size of the array can't be zero or omitted as such will produce an error.
* eg: int a[0]; -> not acceptable
* In case an expression is used as the size of the array, then it must evaluate to a constant literal at the end for it to be accepted as a valid size for that particular array.
* eg: int a[2+2] = {1,2,3,4};
* If the size of the array is omitted, then the array should be initialized immediately after the square bracket (ie at compile time)
* eg: int a[] = {1,2,3,5} -> in this case, the size of the array becomes equal to the number of items initialized.
* An array can be initialized immediately (ie at compile time) also if its size is given .
* eg: int a[3] = {7,8,9};
* If an array is partially initialized, the remaining uninitialized ones will be initialized by the compiler to zero.
* eg: int a[5] = {2,3,5};
* If an array is declared like this: int a[5]; --> then the items in the array cannot be said to be zeroes but garbage values(ie values you don't know where they came from). So it means any attempt to print the values of the items in the array may give you unpredictable values (ie garbage values).
* If an array is declared as the above, then it can be initialized with either indexing or a loop preferably, a for loop.
* If an array is initialized as int a[5]= {0}; then you can be sure to have all the values in the array as zeroes.
* Arrays cannot be initialized as int a[5]= {}; --> This is strictly not allowed and therefore the compiler will give you left and right an error.
* Note that even though int has been used as the data type in these examples, any  other data type can be used.
* If an array is of char data type and it is  partially initialized, then the remaining uninitialized characters, will be initialized by the compiler with NULL instead of zeroes.
* eg: char b[10]={'a', 'b', 'c'}; --> remaining uninitialized values are made NULL.
* All these examples are arrays initialized at compile time, ie they are hard coded by the programmer.
* Note that arrays can also be initialized at the runtime ie when your program runs and you asked for the values of the array from the user.
* This runtime arrays initialization can be achieved by the use of printf, scanf, loops (preferably for loop).
* When array size is very small like 5 or 10 or 15, then initialized them at compile time else runtime.
* When an array is declared and initialized, then contiguous ie consecutive memory locations  are allocated to the array's items. 
* The index of the array always starts from  zero to size of the array minus 1.
* The name of the address of the first element of an array is called the base address.
* The name of the array will store the value of the base address (ie address of the first element) hence, the array name serves as a pointer variable.
* eg: int a[5]={1,2,3,4,5}; --> This array is represented in memory as follows:
	
	|0000|0004|0008|0012|0016|--> memory address
	--------------------------
	| 1  | 2  | 3  | 4  | 5  | --> array items
	-------------------------- 
	| 0  | 1  |  2 | 3  | 4  |  --> array index 
* Here as illustrated above, the base memory address is 0000 and this is the address that will be stored in the name of the array which is a in this case.
* first element --> a[0] == 1
* second element --> a[1] ==2
* third element --> a[2] == 3
* fourth element --> a[3] ==4
* fifth element  --> a[4] ==5
* If you want to calculate the address of any item of an array, if you know the base address (ie address of the first element), the size and index of the specific element whose address you want then, use the formulae:
	--> Base address + (index_of_element * size_of_data_type_of_array).
* There is no bound checking of arrays in C ie you will get a garbage value if you try to access non-existent index of an array in C. In other languages, you'll get an error but C will give you some garbage values.
*
*/


#include <stdio.h>

void main()
{
	int a[5], i, item;
 	for(i=0; i<5; i++)
	{
		printf("Enter array elements: ");
		scanf("%d", &item);
		a[i]=item;
	}

	for(i=0; i<5; i++)
	{
		printf("%d", a[i]);
	}

	putchar('\n');
}
