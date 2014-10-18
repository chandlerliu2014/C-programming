#include <stdio.h>

/*do you know use continue and break?*/

main()
{
	int c1,c2;

	c2 = '1';
	while((c1 = getchar()) != EOF) {
		if(c1 == c2)
			if(c1 == ' ') {
				c2 = c1;
				continue;
			}
		putchar(c1);
		c2 = c1;
	}
}
