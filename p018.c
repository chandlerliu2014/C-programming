#include <stdio.h>

/*count the number of char:first edition*/

main()
{
	long nc;
	
	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n",nc);
}
