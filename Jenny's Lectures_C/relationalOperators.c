/**
* Date: 16 Sep 2023 08:52:05 AM GMT 
* Author: Rolemodel
* Topic: Relational Operators
    ---------------------------------
    1. Relational operators are used to check the relation between two things: literal, variable, expression etc.
    2. They are used to check conditions in decision making.
    3. They are also called comparison operators.
    4. They output 1 (true) or 0 (false)
    5. The relational operators are <, >, <=,>= ==, != etc
    6. eg: 3<6 will output 1 ie true
    7. eg: 3>5 will output 0 ie false
    8. eg: 3<=3 will output 1 ie true
    9. eg: 2+4>6+1 will output 0 ie false //expression.
    10. eg: a>b //variables
    11. 'a'<'c' // comparing characters
    12. eg: true == false // comparing booleans
NB: Strings cannot be compared directly with another string using relational operators as its address is checked or compared instead of their values.
     13. When you have more than one relational operator in a single expression without the parenthesis, associativity precedence is followed from left to right.
     14. < to > to <= to >= to == to !=.
     15. Note that arithmetic operators are of higher precedence to relational operators and will therefore will be evaluated first when they both appear in the same expression
     16. If you require higher precision in floating point values, then avoid using == and != operators.      

So it means all other data types can be compared using relational operational operators.

*/

#include <stdio.h>

void main()
{
	int a =18, b =9,c, d, e=10;
	c = b++; //9 
	d = b; //10 ie since b=10 from the previous statement
	int f=a>b>d<c;
	float g= 2.2, h=2.22;
	
	printf("%d %d %d %d %d %d %.1f %.2f\n", a,b,c,d,e,f,g,h);
	
	printf("a<b= %d\n", a<b); //0
	printf("a==b= %d\n", a==b);//0
	printf("b!=a= %d\n", b!=a); //1
	printf("'c'<'b'= %d\n", 'c'<'b'); //0
	printf("a<b<c>d= %d\n", a<b<c>d); // 0
	printf("b==e= %d\n",b==e); //1
	printf("c+1>e= %d\n",c+1>e);//0
	printf("a+c==b>e<c+d= %d\n",a+c==b>e<c+d);//0
	printf("f!=1= %d\n",f!=1); //0
	printf("g<h= %d\n",g<h);//1
	printf("g==h= %d\n",g==h); //0
	printf("a+c==b>=e<c+d!=1= %d\n",a+c==b>=e<c+d!=1); //1
	printf("'+'=='+'= %d\n", '+'=='+');
	
}

    
    
    


