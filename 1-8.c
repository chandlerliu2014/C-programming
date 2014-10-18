#include <stdio.h>

/*count the ' ','\t','\n'*/

main()
{
	int n1 = 0; //' '
	int n2 = 0; //'\t'
	int n3 = 0; //'\n'

	int c;
	
	while((c = getchar()) != EOF) {
		if(c == ' ')
			++n1;
		if(c == '\t')
			++n2;
		if(c == '\n')
			++n3;
	}
	printf("space:%3d tab:%3d lines:%3d\n",n1,n2,n3);
}
