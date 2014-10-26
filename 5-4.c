#include <stdio.h>

int strend_(char *s,char *t);

main()
{
	char *s = "I am chandler,hello,chandler";
	char *t = "chandler";
	printf("%d\n",strend_(s,t));
}

int strend_(char *s,char *t)
{
	int i;

	for(;*s != '\0';s++) {
		for(i = 0;*(t+i) == *(s+i);i++)	
			;
		if(i > 0 && *(t+i-1) == '\0' && *(s+i-1) == '\0')
			return 1;
	}
	return 0;
}
