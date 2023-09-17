#include<stdio.h>

void main()
{
	int a=5, b =10;
	printf("%d\n",a);
	printf("%d\n",b);
	a = a+b-(b=a); //a is now 10
	printf("%d\n",a);
	printf("%d\n",b);
}
