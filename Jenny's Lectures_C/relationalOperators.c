/*
1. relational operators are used to check conditions
2. used to compare 2 values and hence are sometimes called comparisoon operators
3. they give output of true or false depending on the condition
4. true is stored as 1 and false is stored as 0
5. these are the available relational operators < > <= >= == !=
6. they can also be used to compare 2 expressions
7. cannot be used to compare strings because it compares the address instead of the strings themselves but can be used with characters 
8. the format specifier used to print this is %d
9. associativity of these relational operators is from left to right ie when there are multiple of these operators in a single expression, they are evaluated from left to right
*/

#include<stdio.h>
void main()
{
int a = 18, b =9, c, d, e=10;
c =b++;
d =b;
int f = a>b>d<c; //0
printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\nf=a>b>d<c=%d\n",a,b,c,d,e,f);
printf("a<b=%d\n", a<b); // 0
printf("c<b=%d\n", 'c'<'b');// 0
printf("a<b<c<d=%d\n",a<b<c<d); //
printf("b==e=%d\n",b==e); //1
printf("a+c==b>e<c+d=%d\n",a+c==b>e<c+d); //0
printf("f!=1=%d\n", f!=1);//1
printf("a+c==b>=e<c+d!=1=%d\n",a+c==b>=e<c+d!=1);//1
}
