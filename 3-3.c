#include <stdio.h>

#define MAXLINE 1000

void expand(char s1[],char s2[]);

main()
{
	char s1[MAXLINE],s2[MAXLINE];
	int i,c;

	for(i = 0;i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n';i++) {
		s1[i] = c;
	}
	if(c == '\n')
		s1[i++] = '\n';
	s1[i] = '\0';
	expand(s1,s2);
	printf("%s",s2);
}

void expand(char s1[],char s2[])
{
	int c,i,j;
	int k;
	
	for(i = 0,j = 0;s1[i] != '\0';i++) {
		if(s1[i] == '-' && i != 0) {
			if(s1[i-1] >= 'a' && s1[i-1] <= 'z'
				&& s1[i+1] >= 'a' && s1[i+1] <= 'z'
				|| s1[i-1] >= 'A' && s1[i-1] <= 'Z'
				&& s1[i+1] >= 'A' && s1[i+1] <= 'Z'
				|| s1[i-1] >= '0' && s1[i-1] <= '9'
				&& s1[i+1] >= '0' && s1[i+1] <= '9')
				for (k = 0;k < s1[i+1] - s1[i-1]-1;k++)
					s2[j++] = s1[i-1] + k + 1;
				
		}
		else
			s2[j++] = s1[i];
	}
	s2[j] = '\0';
}
