#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[50];
	FILE *fp = fopen("rol.txt", "a");
	
	if(fp == NULL)
	{
		puts("File does not exist!");
		exit(1);
	}

	printf("Enter string to append: ");
	gets(str);
//	fprintf(fp, "%s\n", str);

	fputs(str, fp);
	fclose(fp);
	return(0);
}
