#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	int numOfLines = 0;
	FILE *fp = fopen("rol.txt", "r");


	if (fp == NULL) exit(1);


	while ((c = fgetc(fp)) != EOF)  (c == '\n') ? ++numOfLines : numOfLines;


	printf("%d\n", numOfLines);

	fclose(fp);

	return(0);
}
