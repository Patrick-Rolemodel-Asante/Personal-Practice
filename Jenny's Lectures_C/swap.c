#include<stdio.h>

void main()
{
	int a=5, b =10;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	//a = a+b-(b=a); //a is now 10 
	
	/*a=a+b, b=a-b, a=a-b;*/
	
	//a=a*b, b=a/b, a=a/b;
	
	//a=a^b, b=a^b, a=a^b;
	
	int *temp =&a;
	a=b; 
	b=*temp;
	
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
