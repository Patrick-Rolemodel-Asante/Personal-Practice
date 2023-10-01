#include <stdio.h>

void reverse_array(int *a, int n);

void main()
{
	int a[]={0,1,2,3,4,5,6,7,8,9,9,8,1024,1337}, i=0;
	reverse_array(a, 14);
	for(;i<14;i++)
		printf("%d, ", a[i]);
	printf("\n");
}

void reverse_array(int *a, int n)
{
	int i=0, temp;
	
	for(; i<n/2; i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	
}
