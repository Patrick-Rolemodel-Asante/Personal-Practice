#include <stdio.h>

char * str_lower(char * s);

void main(void)
{
	char str[60];
	printf("Enter string: ");
	gets(str);
	
	printf("%s\n", str_lower(str));
}

char * str_lower(char * s)
{
	int i=0;
	for(; s[i]!='\0';i++)
	{
		if(64<s[i]&&s[i]<91)
			s[i]+=32;
		else
			continue;
		
			
	}
	return s;
}
