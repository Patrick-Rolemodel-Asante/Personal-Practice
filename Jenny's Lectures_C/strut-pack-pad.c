/**
* Padding is a technique that the compiler uses to align the data members of structures, arrays, unions, bitfields etc in memory. This means that the compiler adds some extra bytes between these members to make them fit on certain boundaries. 
* Eg: On a 32-bit machine, the compiler may align the members on a 4-byte boundaries, so that each member can be accessed in one memory cycle. This can improve the performance and efficiency of a program but also increases memory usage.
* You should be concerned with padding when considering memory usage, data transfer, debugging etc.
* Packing is the opposite of padding and is a technique to reduce the size of a structure, arrays, unions, bitfields etc by removing padding bytes between members of these types.
* To ensure packing, use #pragma pack(numOfPack) or __attribute__((pack))
* Also, padding can be reduced and yet speed will be retained by arranging data members in ascending order ie char -> int -> float -> double etc.
**/

#include <stdio.h>
//#pragma pack(1)

struct __attribute__((packed)) demo
{
	char a, b;
	int c;
}d;

int main()
{
	printf("%lu\n", sizeof(d));
	return(0);
}
