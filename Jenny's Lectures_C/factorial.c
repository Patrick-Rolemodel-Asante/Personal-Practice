/*
APPLICATION OF PREFIX OPERATORS
-------------------------------
1. Prefix operators are useful when you want to  use the updated value of a variable after incrementing or decrementing it
2. Calculate factorial of a number, use prefix operator to decrement the number before multiplying it with the previous result
*/

#include<stdio.h>
void main()
{
int n =5;
int f =1; //variable to store factorial

while (n>0)
{
f*=n;
--n;
}
printf("%d", f);
}
