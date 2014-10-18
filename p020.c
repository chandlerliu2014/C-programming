#include <stdio.h>

#define IN  1 //in word
#define OUT 0 //out word

/*count number of lines,words and chars*/

main()
{
	int c,nl,nw,nc,state;
	state = OUT;
	nl = nw = nc = 0;

	while((c = getchar()) != EOF) {
		++nc;
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n",nl,nw,nc);
}
