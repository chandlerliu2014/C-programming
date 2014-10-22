#include <stdio.h>

#define MAXLINE 1000

void itob(int n,char s[],int b);

main()
{
}

void itob(int n,char s[],int b)
{
	int i;

	i = 0;
	do {
		if(n % b >= 10) {
			s[i++] = n % b - 10 + 'a';
		}
		else
			s[i++] = n % b + '0';
	} while ((n /= b) > 0);

	if (b == 8)
		s[i++] = '0';
	if (b == 16) {
		s[i++] = 'x';
		s[i++] = '0';
	}
	s[i] = '\0';
	reverse(s);
}
