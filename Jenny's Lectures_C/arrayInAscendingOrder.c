/*
APLLICATION OF POSTFIX OPERATOR
-------------------------------
1. Postfix operators are useful when you want to use the original vlaue of a variable before incrementing it.

2. Print an array of numbers in ascending order
*/

#include<stdio.h>

void main()
{
int arr[] = {10,20,30,40};
int i = 0;
while (i<4) 
{
printf("%d ", arr[i]); // 10,20,30,40
i++;
}

}
