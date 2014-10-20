#include <stdio.h>

#define TABINC 8 //tab increment size

//replace tabs with the proper number of blanks

main()
{
	int c,nb,pos;

	nb = 0;
	pos = 1;
	while((c = getchar()) != EOF) {
		if(c == '\t') {         //tab character
			nb = TABINC - (pos - 1) % TABINC;
			while(nb > 0) {
				putchar(' ');
				++pos;
				--nb;
			}
		} else if(c == '\n') {   //newline character
			putchar(c);
			pos = 1;
		} else{                  //other characters
			putchar(c);
			++pos;
		}
	}
}
