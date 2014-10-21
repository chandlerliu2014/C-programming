#include <stdio.h>

int htoi(char s[]);
int getline_(char line[],int maxline);

main()
{
	char s[10];

	while(getline_(s,10) > 0) {
		printf("%d \n",htoi(s));
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

int htoi(char s[])
{
	int i;
	int n;

	for(i = 0,n = 0;s[i] != '\n' && s[i] != '\0';++i) {
		if(s[i] >= '0' && s[i] <= '9')
			n = 16 * n + s[i] - '0';
		else if (s[i] == 'a' || s[i] == 'A')
			n = 16 * n + 10;
		else if (s[i] == 'b' || s[i] == 'B')
			n = 16 * n + 11;
		else if (s[i] == 'c' || s[i] == 'C')
			n = 16 * n + 12;
		else if (s[i] == 'd' || s[i] == 'D')
			n = 16 * n + 13;
		else if (s[i] == 'e' || s[i] == 'E')
			n = 16 * n + 14;
		else if (s[i] == 'f' || s[i] == 'F')
			n = 16 * n + 15;
	}
	return n;
}
