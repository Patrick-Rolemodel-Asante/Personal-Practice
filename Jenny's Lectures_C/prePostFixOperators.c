/*
postfix and prefix operators are of higher precedence to assignment operators
pre means before

post means after

preIncrement means increase before store in memory 
++x means increase the value of x by 1 then store the new value in memory. NEW VALUE is used here!!

postIncrement means store in memory then after increase
x++ means store x in memory then after increase the value of x by 1. OLD VALUE of x is used here!!

preDecrement means decrease before store in memory
--x means decrease the value of x by 1 then store the new value in memory. NEW VALUE is used here!!

postDecrement means store in memory then after decrease
x-- means the store the value of x in memory then after decrease the value of x by 1. LD VALUE of x is used here!!
*/


#include<stdio.h>
void main()
{
int x = 10, y;

printf("x=%d\n",x); //10

y =--x;
printf("y=--x=%d\n",y); //9

y =++x;
printf("y=++x=%d\n",y); //10

int a =5, b;
printf("a=%d\n",a);//5

b =a--;
printf("b=a--=%d\n",b); //4

b =a++;
printf("b=a++=%d\n",b); //4


}
