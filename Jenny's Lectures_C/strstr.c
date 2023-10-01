#include <stdio.h>

char *_strstr(char *haystack, char *needle);

void main()
{
	 char *s = "hello, world";
	 char *f = "world";
	 char *t;

	 t = _strstr(s, f);
	 printf("%s\n", t);
}


char *_strstr(char *haystack, char *needle)
{
        int i = 0;
        char *res;

        for (; *(haystack + i) != '\0'; i++)
        {
                int ii = 0;

                for (; *(haystack + i + ii) == *(needle + ii) && *(needle + ii) != '\0'; )
                        ii++;

                if (needle[ii] == '\0')
                {
                        res = haystack + i;
                        return (res);
                }
        }
        return (NULL);
}

