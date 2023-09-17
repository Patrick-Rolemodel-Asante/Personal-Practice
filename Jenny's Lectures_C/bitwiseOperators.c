/**
Date: Sat 16 Sep 2023 04:48:39 PM GMT 
Author: Rolemodel
Topic: Bitwise operators in C
------------------------------
1. They are used to perform operations at the bit level.
2. Bit is the smallest storage unit in computer memory. Byte is equals 8 bits.
3. Bitwise operators can only be applied on integer values and character values but not the other data types.
4. These are the bitwise operators in C: & (bitwise AND), | (bitwise XOR), ^ (bitwise EXOR), ~ (bitwise NOT or 1's Complement), << (left shift), >> (right shift).
5. Bitwise operators are all binary operators hence we require 2 operands in order to use them excep ~ which is unary operator.
6. For bitwise operators, the operands are converted to their binary forms first before the operation is applied, after which it is converted to decimal form and displayed to the user.
7. The prerequisite to bitwise operators is for you to know how to convert numbers to their binary equivalent when given in decimal format and vice versa.
8. eg1:
	10 & 5;
	10 = 1010 in binary using 4 bits to represent the number.
	5 = 101 in binary using 4 bits to represent the number.
	so back to our question:
	10 = 1010
	5  = 0101
	& ----------
	     0000   ie that is applying the
	  ----------- truth table for AND.
	So the output for this is zero, 0.
9. Note that bitwise operators cannot be performed on negative numbers.
10. Let's say we store this operation in a variable say c = 10 & 5, then each bit in c after the & operation will be 1 if and only if the corresponding bits in each of the numbers ie 10 and 5 are 1. That is if the bits are 1 in given positions in both numbers else, the final value will be 1.
11. eg2:
	c  = 10 | 5 
	10 = 1010
	5  = 0101
	|  -------
	c  = 1111 = 15
	   -------
12. eg3:
	c  = 10 ^ 5
	10 = 1010
	5  = 0101
	^  --------
	c  = 1111 = 15
	   -------
13. The truth table for bitwise AND & is given:
	0 0 | 0
	0 1 | 0
	1 0 | 0
	1 1 | 1
14. The truth table for bitwise OR  | is:
	0 0 | 0
	0 1 | 1
	1 0 | 1
	1 1 | 1
15. The truth table for bitwise XOR ^ is given:
	0 0 | 0
	0 1 | 1
	1 0 | 1
	1 1 | 0
16. eg4: 10 = 1010
	  6 = 0110

17. The precedence is arithmetic > bitwise (& and then |) > logical

*/



#include<stdio.h>

void main()
{
	int a=10, b=6; // 10 = 1010 and 6 = 0110
	printf("a&b= %d\n", a&b); //2
	printf("a|b= %d\n", a|b);//14
	printf("a^b= %d\n", a^b);//12
	printf("a&b && b+1 || 0= %d\n", a&b && b+1 || 0);//1
	
}
	 
