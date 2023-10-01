#include <stdio.h>
#include <string.h>

void main()
{
	char str1[60], str2[60];
	int len1=0, len2=0;
	
	printf("Enter first string: ");
	fgets(str1, 60, stdin);
	char *newline = strchr(str1, '\n');
	if(newline) *newline = '\0';
	
	printf("Enter second string: ");
	fgets(str2, 60, stdin);	
	char *line = strchr(str1, '\n');
	if(line) *newline = '\0';
	
	while(str1[len1]!='\0')
		len1++;
		
	str1[len1]=' ';
	len1++;
	
	while(str2[len2]!='\0')
	{
		str1[len1]=str2[len2];
		len1++,len2++;
	}	

	str1[len1] = '\0';
	
	
	puts(str1);
	
}
