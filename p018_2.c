#include <stdio.h>

/*count the number of char:second edition*/

main()
{
	double nc;

	for(nc = 0;getchar() != EOF;++nc)
		;
	printf("%.0f\n",nc);
}
