#include <stdio.h>

#define MAXLINE 1000

int getline_(char line[],int lim);
void copy(char longest[],char line[]);

main()
{
	int len,max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = getline_(line,MAXLINE)) > 0) {
		printf("%d %s",len,line);
		if(len > max) {
			max = len;
			copy(longest,line);
		}
	}
	if(max > 0)
		printf("%s",longest);

	return 0;
}

int getline_(char line[],int lim)
{
/*
	int c,i;

	for(i = 0;i < lim - 1 && (c = getchar()) != EOF && c != '\n';i++)
		line[i] = c;
	if(c == '\n')
		line[i++] = c;
	line[i] = '\0';

	return i;
*/
	int c,i,j;
	for(i = 0,j = 0;(c = getchar()) != EOF && c != '\n';++j) {
		if(j < lim - 2) {
			line[j] = c;
			++i;
		}
	}
	if(c == '\n') {
		line[i++] = c;
		++j;
	}
	line[i] = '\0';
	return j;
}
void copy(char to[],char from[])
{
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
