/*
1. = is evaluated from right to left
2. shorthand operators can be used with any other arithmetic binary operator ie -=, +=, /=, *= etc.
3. shorthand operator can only be used if the variable under consideration is repeated at the RHS also. ie a = a+b can be written as a+=b because a is repeated at the RHS.
4. a = b + (c*2) cannot be written as a+=c*2 because the variable a is not repeated at the right hand side;
*/

#include<stdio.h>
void main()
{
int a = 10;
int b,c,d,e;
b=c=d=e=14;
a+=1;


printf("a=%d\n",a);
printf("b=c=d=e=%d\n",b);
printf("a+=1=%d\n", a+=1);

b*=2;
printf("b*=2=%d\n", b*=2);
}
