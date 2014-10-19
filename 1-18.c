#include <stdio.h>

#define MAXLINE 1000

int getline_(char line[],int lim);

main()
{
	char line[MAXLINE];

	while(getline_(line,MAXLINE) > 0)
		printf("%s",line);

	return 0;
}

int getline_(char line[],int lim)
{
	int c,i;
	int c1;
	
	for(i = 0;i < lim - 2 && (c = getchar()) != EOF && c != '\n';++i)
		line[i] = c;
	while((c1 = line[--i]) == ' ' || c1 == '\t')
		;
	if(c == '\n')
		line[++i] = c;
	line[++i] = '\0';
	
	return i;
}
