#include <stdio.h>
#include <string.h>

int _strcmp(char *s1, char *s2);

void main()
{
	char str1[60], str2[60];
	
	printf("Enter first string: ");
	fgets(str1, 60,stdin);
	char *c1 = strchr(str1, '\n');
	if(c1) *c1='\0';
	
	printf("Enter second string: ");
	fgets(str2, 60,stdin);
	char *c2 = strchr(str2, '\n');
	if(c2) *c2='\0';
	
	printf("%d\n", _strcmp(str1, str2));
	printf("%d\n", _strcmp(str2, str1));
	printf("%d\n", _strcmp(str1, str1));
		
	
}

int _strcmp(char *s1, char *s2)
{
	int i=0;
	while(s1[i]!='\0' && s2[i]!='\0')
	{
		if(s1[i]!=s2[i])
			return(s1[i]-s2[i]);
		i++;
	}
	if(s1[i]=='\0' && s2[i]=='\0')
		return(0);
	else
		return(s1[i]-s2[i]);
	
}

