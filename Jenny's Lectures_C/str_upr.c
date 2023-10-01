#include <stdio.h>

char * str_upper(char * s);

void main()
{
	char str[60];
	printf("Enter string: ");
	gets(str);
	
	printf("%s\n", str_upper(str));

}
char * str_upper(char * s)
{
	int i=0;
	for(; s[i]!='\0'; i++)
	{
		if(96<s[i] && s[i]<123)
			s[i]-=32;
		else
			continue;
	}
	return s;
}
