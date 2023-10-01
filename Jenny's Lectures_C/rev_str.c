#include <stdio.h>
#include <string.h>

void reverse_str(char *str);

void main()
{
	char s[60];
	printf("Enter string: ");
	gets(s);
	
	reverse_str(s);
	
	printf("%s\n", s);
}

void reverse_str(char *str)
{
	int i=0, ii=0;
	for(; str[i]!='\0';)
		 i++;
	for(;ii<i/2;ii++)
	{
		char temp=str[ii];
		str[ii]=str[i-1-ii];
		str[i-1-ii]=temp;
	}
	
}
