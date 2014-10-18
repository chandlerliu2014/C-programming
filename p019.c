#include <stdio.h>

/*count input lines*/
/*
main()
{
	int c,nl;
	
	nl = 0;
	while((c = getchar()) != EOF)
		if(c == '\n')
			++nl;
	printf("%d\n",nl);
}*/
main()
{
	int c,nl;

	for(nl = 0;(c = getchar()) != EOF;)
		if(c == '\n')
			++nl;
	printf("%d\n",nl);
}
