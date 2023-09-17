/**
Date: Sat 16 Sep 2023 05:45:58 PM GMT 
Author: Rolemodel
Topic: Bitwise Operators Part 2
1. The left shift binary operator <<  is used to shift the given number to the left in its bitwise representation.
2. The first operand is the number to be shifted while the second operand shows the number of times the left operand is to be shifted.
3. eg1:
	10 << 2 means the shift the binary representation of the number 10 ie 1010 to the left 2 times.
4. << always ends up increasing the left operand.
5. so 10 << 2 = 00001010 will end up to be 00101000 ie 40 in decimal value.
6. eg2:
	10 << 4 ends up witth 10100000 which is 160
7. The shortcut of doing the above is to take the left operand multiplied  by to 2 raised to the power of the right operand
	eg: 10 << 2 = 10 * 2^2 = 10 * 4 = 40
	    10 << 4 = 10 * 2^4 = 10 * 16 = 160
8. The right shift >> is used to shift the bit level of the number to the right side.
9. And the right shift >> is also binary ie takes two operands.
10. eg: 10 >> 2 means 00001010 >> 2 = 00000010 = 2. eg2: 10 >> 4 = 0
11. The shortcut for the right shift >> is the left operand divided by 2 raised the power of the right operand. If you end up with a decimal number, discard the numbers after the decimal point and only take the number before the decimal point as your answer. 
	eg1: 10 >> 2 means 10 / 2^2 = 10/4 = 2.5 = 2 since we discard the point 5.
12. The bitwise NOT ~ operator is unary ie acts or takes only one operand. It is used to find the 1's complement of the given number.
13. The bitwise NOT operator inverts the bits ie if the original bit is 0, it becomes 1 after applying the bitwise NOT ~ operator on it and vice versa.
	eg1: ~5 means ~0101 = 1010 = 10
	Even though this number 10 is supposed to be the answer for the above operation, the computer will store the 2's complement for the first operand rather.
	eg2: ~a = -(a+1) will rather be stored in computer's memory and this is what is going to be printed out to the screen.
*/

#include<stdio.h>

void main()
{
	int a = 6;
	
	printf("a<<2 = %d\n",a<<2); //24
	printf("a<<4 = %d\n",a<<4); //96
	printf("a>>2 = %d\n",a>>2); // 1
	printf("a>>4 = %d\n",a>>4); //0
	printf("~a = %d\n",~a);// -7
	printf("~(a+1) = %d\n",~(a+1)); //-8
	printf("(a+1)>>2 = %d\n",(a+1)>>2);//1
}
	
