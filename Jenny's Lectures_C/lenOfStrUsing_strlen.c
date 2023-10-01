#include <stdio.h>
#include <string.h>

void main()
{
	char name[60];
	printf("Enter name: ");
	gets(name);
	unsigned int len = strlen(name);
	printf("%d\n", len);
}
