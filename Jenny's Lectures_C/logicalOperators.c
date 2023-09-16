/*
* Logical operators are used to test more than one condition
* Relational operators were used to check just one condition
* Logical operators are used in conjunction with relational operators
* The logical operators in C are &&, || and !
* The output of these logical operators are true>=1 or false=0
* eg: a>b && c<d; a==b && b<a; a&&b; 10&&5; a>b && b!=10 && b<11 && a>5;
* The logical operators can also be used with simple variables or constants, or any expressions
* Relational operators are of higher precedence to logical operators and hence will be evaluated first in an expression.
* The && operator will output true only when both conditions checked are true otherwise false or 1
* The logical && operator will only check the next condition only if the first turns true else, it returns false ie it returns false on its first false condition
* The logical || operator will return true if at least one condition is true or else returns false. This means it returns on its first true condition.
* The logical ! operator is unary hence it takes only one value and negates the expression. If the expression is true, then its negation is false else true
*/ 

#include<stdio.h>
void main()
{
int a=10, b=5, result;
result = a>b && b!=10 && b<11 && a>5;
printf("result = a>b && b!=10 && b<11 && a>5 = %d\n", result);
int result_2 = a>b && b!=10 && b<11 && a<5;
printf("result_2=a>b && b!=10 && b<11 && a<5 = %d \n", result_2);
int result_3 = a>b || b==4;
printf("result_3 = a>b || b==4 = %d\n", result_3);
int result_4 = !(a>b);
printf("result_4 = !(a>b) = %d\n", result_4);
}
