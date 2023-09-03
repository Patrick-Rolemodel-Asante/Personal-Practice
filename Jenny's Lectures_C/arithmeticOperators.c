/*
1. % is only used with integers, can't be used with floats
2. % takes the sign of the first operand only
3. might get error when one operand is integer and the other is float if the format specifier is %d but not %f
*/

#include<stdio.h>

void main()
{
int a =10; //b=7;
float b =7;

printf("a+b=%f\n", a+b);
printf("a-b=%f\n", a-b);
printf("a*b=%f\n", a*b);
printf("a/b=%f\n", a/b);
//printf("a%%b=%f\n", a%b);
}
