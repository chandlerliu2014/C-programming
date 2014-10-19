#include <stdio.h>

#define MAXLINE 1000

int getline_(char line[],int lim);
void reverse(char s[]);

main()
{
	char line[MAXLINE];
	
	while(getline_(line,MAXLINE) > 0) {
		reverse(line);
		printf("%s",line);
	}
	return 0;
}

int getline_(char line[],int lim)
{
	int c,i;
	for(i = 0;i < lim -2 && (c = getchar()) != EOF && c != '\n';++i)
		line[i] = c;
	if(c == '\n')
		line[i++] = c;
	line[i] = '\0';

	return i;
}

void reverse(char s[])
{
	int i,j;
	char temp;

	i = 0;
	while(s[i++] != '\0')
		;
	--i;
	if(s[i - 1] == '\n')
		--i;
	--i;

	j = 0;
	while(j < i) {
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}
