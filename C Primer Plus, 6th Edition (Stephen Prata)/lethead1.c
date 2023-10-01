/*lethead1.c*/
#include <stdio.h>
#include <string.h>
#define NAME "ROL'S CONSULT"
#define ADDRESS "102 ROL'S PLAZA"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 60
#define SPACE ' '
#define PATTERN '$'

void starbar(char s[]); // func prototype
int func_called = 0;

void main()
{
	starbar(NAME);
	starbar(PLACE);
	starbar(ADDRESS);
}

void starbar(char s[])
{
	int size = strlen(s);

	int space_num = (WIDTH - size)/2;

	int count;
	if(func_called <=0)
	{
		for(count=0; count<WIDTH; count++)
			putchar(PATTERN);
		printf("\n\n");
		
		for(count=0; count<space_num; count++)
			printf("%c", SPACE);
		
		printf("%s\n", s);
		
		for(; space_num<WIDTH; space_num++)
			printf("%c", SPACE);
			
 		func_called++;
 		putchar('\n');
	}
	else

	{	
			
		for(count=0; count<space_num; count++)
			printf("%c", SPACE);
		
		printf("%s\n", s);
		
	
		
		for(; space_num<WIDTH; space_num++)
			printf("%c", SPACE);
		
		putchar('\n');
		func_called++;
		
		if (func_called ==3)
		{
			for(count=0; count<WIDTH; count++)
				putchar(PATTERN);
			putchar('\n');
		}
	}
		
	
	
}

