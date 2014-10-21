/*
for  (i = 0;i < lim -1 && (c = getchar()) != '\n' && c != EOF;++i)
		s[i] = c;
 */

i = 0;
while(i < lim - 1) {
	c = getchar();
	if( c != '\n') {
		if(c != EOF)
			s[i] = c;
			++i;
			continue;
	}
	break;
}

//in the answer book
enum loop { NO,YES};
enum loop okloop = YES;

i = 0;
while(okloop == YES)
	if(i >= lim - 1)
		okloop = NO;
	else if ((c = getchar()) == '\n')
		okloop = NO;
	else if (c == EOF)
		okloop = NO;
	else {
		s[i] = c;
		++i;
	}
