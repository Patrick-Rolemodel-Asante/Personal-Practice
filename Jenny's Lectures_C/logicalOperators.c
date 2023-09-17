/**
* Date: Sat 16 Sep 2023 09:58:58 AM GMT 
* Author: Rolemodel
* Topic: Logical Operators
---------------------------
1. There are logical operators in C: && (binary logical AND), || (binary logical OR) and ! (unary logical NOT).
2. Logical operators are used to check more than one condition unlike relational operators which are used to check only one condition.
3. eg1:
	a>b && c<d //logical exp or compound relational exp
4. They output either 1 (true) or 0 (false).
5. They are also used to combine two expressions but not compulsory for both sides of the logical operator to be expressions, the sides can be simple variables, constants etc.
6. eg2:
	a==b && b<a
	a && b
	1 && 5
7. For binary && operator, it gives 1 ie true only if both operands are true else it gives 0 ie false.
8. For binaray || operator, it gives 1 ie true if at least one operand is true else 0 ie false if both operands are false.
9. Binary logical && stops checking all conditions and returns 0 when it first encounters a false statement else it continues to check all the conditions to the end.
10. Binary logical || will return 1 ie true on its first encounter of a true statement else it continues to check all the conditions to the end.
11. For the unary logical ! operator, it negates it operand ie returns 1 if operand is false but 0 if the operand is true.
eg:
	!(a>)
	
*/

#include<stdio.h>

void main()
{
	int a=10, b=5;
	int result = a>b && printf("DaDa Rol\n");
	
	printf("a==b && b<a = %d\n", a==b && b<a);
	printf("a>b && b!=10 && b<11 && a>5 = %d\n",a>b && b!=10 && b<11 && a>5);//1
	printf("a>b && b!=10 && b<11 && a<5 = %d\n",a>b && b!=10 && b<11 && a<5);//0
	printf("a>b || b==4 =%d\n",a>b || b==4); //0
	printf("%d\n", result);//0
	
	result = a>b && printf("DaDa Rol\n") || printf("Patrick"); 
	printf("%d\n", result);//1
	
	result = a>b && printf("DaDa Rol ") || printf("Patrick") && printf("Rol\n");//1
	
	 printf("4&&!0 = %d\n",4&&!0);//1
	 printf("4&&0= %d\n",4&&0);//0
	 
	 result = a<b && a++;
	 printf("%d\n", result);//0
	 
	 a=1, b=6;
	 result = a-- && ++b;
	 printf("%d\n", result);//1
	 
	 result = --a && ++b;
	 printf("a= %d, b= %d", a,b);
	 printf("%d\n", result);//0
}
