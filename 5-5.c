#include <stdio.h>

void strnpy_(char *s,char *t,int n);
void strncat_(char *s,char *t,int n);
int strncmp_(char *s,char *t,int n);

main()
{
	char s[20] = "hello ";
	char *t = "I am chandler.";
	strncat_(s,t,6);
	printf("%s\n",s);
}

void strnpy_(char *s,char *t,int n)
{
	for(;n > 0;n--)
		*s++ = *t++;
	*s = '\0';
}

void strncat_(char *s,char *t,int n)
{
	while(*s)
		s++;
	for(;n > 0;n--)
		*s++ = *t++;
	*s = '\0';
}

int strncmp_(char *s,char *t,int n)
{
	for(;n > 0 && *s == *t;n--,s++,t++) {
		;
	}
	if(n == 0 && *t == '\0')
		return 0;
	return *s - *t;
}
