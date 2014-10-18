#include <stdio.h>

/*The first edition*/

main()
{
	int c;

	c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
}
