#include <stdio.h>

#define MAXLINE 1000

int getline_(char line[],int maxline);
int any(char s1[],char s2[]);

main()
{
	char s1[MAXLINE],s2[MAXLINE];

	printf("Please enter s2: \n");
	if(getline_(s2,MAXLINE) < 1)
		return 0;
	while(getline_(s1,MAXLINE))
		printf("%d \n",any(s1,s2));
}
int any(char s1[],char s2[])
{
	int i,j;

	for(i = 0;s1[i] != '\0';i++) {
		for(j = 0;s2[j] != '\0';j++)
			if(s1[i] == s2[j])
				return i;
	}
	return -1;
}

int getline_(char s[],int lim)
{
	int c,i;

	for(i = 0;i < lim - 1 && (c = getchar()) != EOF && c != '\n';++i)
		s[i] = c;
	if(c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
