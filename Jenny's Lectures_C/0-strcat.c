#include <stdio.h>

char *_strcat(char *dest, char *src);

void main()
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
}

char *_strcat(char *dest, char *src)
{
	int i=0, ii=0;
	
	while(dest[i]!='\0')
		i++;
		
	while(src[ii]!='\0')
	{
		dest[i]=src[ii];
		i++,ii++;
	}
	
	dest[i]='\0';
	
	return dest;
	
}
