#include <stdio.h>

char *_strncat(char *dest, char *src, int n);

void main()
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
}

char *_strncat(char *dest, char *src, int n)
{
	int i=0, ii=0;
	while(dest[i]!='\0')
	{
		i++;
	}
	
	while(ii<n && src[ii]!='\0')
	{
		dest[i]=src[ii];
		i++, ii++;
	}
	
	dest[i]='\0';
	
	return (dest);

}
