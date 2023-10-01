#include <stdio.h>

char *_strpbrk(char *s, char *accept);

void main()
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
}



char *_strpbrk(char *s, char *accept)
{
        int i = 0, ii = 0;

        for (; *(s + i) != '\0'; i++)
        {
                for (; *(accept +  ii) !='\0'; ii++)
                {
                        if(*(s + i) == *(accept + ii))
                                return (s + i);
                }
                ii = 0;
        }

        return (NULL);
}

