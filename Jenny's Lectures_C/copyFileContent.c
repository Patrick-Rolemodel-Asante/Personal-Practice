#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	FILE *fp1 = fopen("rol.txt", "r");
	FILE *fp2 = fopen("dest.txt", "w");

	if (fp1 == NULL) exit(1);

	while ((c = fgetc(fp1)) != EOF) fputc(c, fp2);

	printf("Copied successfully👌👌\n");


	fclose(fp1);
	fclose(fp2);

	return(0);
}
