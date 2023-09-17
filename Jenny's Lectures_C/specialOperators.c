/**
Date: Sat 16 Sep 2023 07:42:01 PM GMT 
Author: Rolemodel
Topic: Special Operators: Pointers, sizeOf etc.
1. These special operators in C are comma ie , sizeof, pointers * and &, . ie dot operator and 
-> operator.
2. Comma (,) is the operator with the least precedence for all the operators in C.
3. comma can also be used as a separator in programs especially when declaring and assigning variables. eg: int a, b, c; or int a=2, b=3, c=19;
4. comma is binary operator ie takes two operands.
5. comma evaluates 2 expressions (operands) and returns the rightmost one ie the first operand or exp is rejected after it is evaluated.
6. comma operator acts as a sequence point ie that the left expression is fully evaluated before the right expression is evaluated.
7. the comma operator can be used to combine multiple expressions into a single statement such as in a for loop or an assignment statement.

uses of the comma operator
--------------------------
1. to assign multiple values to a variable in one statement. eg: int x = (10,20);
2. to increment a variable and print its value in one statement. eg: int i = 0;
		      print("%d",(i++, i));
3. to swap two variables without using a temporary variable: int a = 5, b=10;
		    (a^=b, b^=a, a^=b));
4. to execute multiple expressions in a for loop: for (int i=0, j=10; i<j; i++, j--)
