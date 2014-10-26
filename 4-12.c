#include <stdio.h>

#define MAXLINE 100

void itoa_(int n,char s[]);

main()
{
	char s[MAXLINE];
	itoa_(1234,s);
	printf("%s\n",s);

	return 0;
}

void itoa_(int n,char s[])
{
	void reverse(char s[],int i);
	int i;

	i = 0;
/*
	while(n > 0) {
		s[i++] = n % 10 + '0';
		n = n / 10;
	}
*/
	do {
		s[i++] = n % 10 + '0';
	} while((n = n / 10) > 0);
	s[i] = '\0';
	reverse(s,i);
}

void reverse(char s[],int i)
{
	int j = 0;
	int temp;

	i--;
	for (j = 0;s[j] != '\0';j++,i--) {
		if(j < i) {
			temp = s[j];
			s[j] = s[i];
			s[i] = temp;
		}
	}
}


void itoa_2(int n,char s[])
{
	static int i;

	if (n / 10)
		itoa_2(n / 10,s);
	else {
		i = 0;
		if(n < 0)
			s[i++] = '-';
	}
	s[i++] = abs(n) % 10 + '0';
	s[i] = '\0';
}
void reverse_(char s[])
{
	void reverser(char s[],int i,int len);
	reverser(s,0,strlen(s));
}
void reverser(char s[],int i,int len)
{
	int c,j;
	j = len - (i + 1);
	if(i < j) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		reverser(s,++i,len);
	}
}
