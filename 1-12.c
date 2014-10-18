#include <stdio.h>
#define IN  1 //in word
#define OUT 0 //out word

/*print a word in a line*/

main()
{
	int c,state;
	//state = OUT;

	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			continue;
		}
		else if(state == OUT) {
			state = IN;
			printf("\n");
		}
			putchar(c);
	}
	printf("\n");
}
