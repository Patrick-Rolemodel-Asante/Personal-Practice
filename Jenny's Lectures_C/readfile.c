#include <stdio.h>
#include <string.h>


int main()
{
	char ch;
	FILE *fp = fopen("rol.txt", "r");

//	fgets(str,88,fp);

	while((ch=fgetc(fp)) != EOF)
		printf("%c", ch);

//	printf("\n");

	fclose(fp);

	return(0);
}
