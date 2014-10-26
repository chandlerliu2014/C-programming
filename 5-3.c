#include <stdio.h>

void strcat_(char *s,char *t);

/*
void strcat(char s[],char t[])
{
	int i,j;

	i = j = 0;
	while(s[i] != '\0')
		i++;
	while((s[i++] = t[j++]) != '\0')
		;
}
 */
main()
{
	char s[20] = "chandler";
	char t[10] = "liu";

	strcat_(s,t);
	printf("%s\n",s);
}
void strcat_(char *s,char *t)
{
	while(*s != '\0')
		s++;
	while((*s++ = *t++) != '\0')
		;
}
