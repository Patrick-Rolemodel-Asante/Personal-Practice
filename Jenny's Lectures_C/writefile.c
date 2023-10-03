#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main()
{
	char str[100];
	FILE *fp = fopen("rol.txt", "w");

	printf("Enter text: ");
	gets(str);

	fprintf(fp, "%s\n",str);

	fclose(fp);
	return(0);
}
