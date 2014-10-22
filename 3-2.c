#include <stdio.h>

void escape(char s[],char t[]);

main()
{
	
}

void escape(char s[],char t[])
{
	int i,j;
	
	for(i = 0,j = 0;s[i] != '\0';i++) {
		switch s[i] {
			case '\t':
				t[j++] = '\\';
				t[j++] = 't';
				break;
			case '\n':
				t[j++] = '\\';
				t[j++] = 'n';
				break;
			default:	
				t[j++] = s[i];
		}
	}
	t[j] = '\0';
}

void unescape(char s[],char t[])
{
	int i,j;
	
	for(i = 0,j = 0;s[i] != '\0';i++) {
		if (s[i] != '\\')
			t[j++] = s[i];
		else {
			switch s[++i] {
				case 't':
					t[j++] = '\t';
					break;
				case 'n':
					t[j++] = '\n';
					break;
				default:
					t[j++] = '\\';
					t[j++] = s[i];
					break;
			}
		}
	}
	t[j] = '\0';
}
