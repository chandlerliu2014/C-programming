#include <stdio.h>

#define MAXLINE 1000

int getline_(char line[],int maxline);
void squeeze(char s1[],char s2[]);

/*
 void squeeze(char s[],int c)
{
	int i,j;
	for(i = j = 0;s[i] != '\0';i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}
 */

main()
{
	char s1[MAXLINE],s2[MAXLINE];
	printf("Please enter s2: \n");
	if (getline_(s2,MAXLINE) < 1)
		return 0;
	while(getline_(s1,MAXLINE)) {
		squeeze(s1,s2);
		printf("%s\n",s1);
	}
		
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

void squeeze(char s1[],char s2[])
{
	int i,j,k;

	for(i = 0;s2[i] != '\0';i++) {
		for(j = 0,k = 0;s1[j] != '\0';j++) {
			if(s1[j] != s2[i]) {
				s1[k++] = s1[j];
			}
		}
	}
	s1[k] = '\0';
}
