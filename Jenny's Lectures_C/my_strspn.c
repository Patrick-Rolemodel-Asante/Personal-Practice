#include <stdio.h>

unsigned int _strspn(char *s, char *accept);

void main()
{
	char *s = "hello, world";
	char *f = "oleh";
	
	printf("%u\n", _strspn(s,f));
}


unsigned int _strspn(char *s, char *accept)
{
        int i = 0, ii = 0, counter = 0;

        for (; *(s + i) != '\0'; i++)
        {
                int found = 0;

                for (; *(accept + ii) != '\0'; ii++)
                {
                        if (*(s + i) == *(accept + ii))
                        {
                                found = 1;
                                break;
                        }
                }

                if (!found)
                        break;
                counter++;
                ii = 0;
        }

        return (counter);
}



