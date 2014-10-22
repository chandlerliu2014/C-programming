unsigned rightrot(unsigned x,int n)
{
	int worldlength(void);
	unsigned rbits;

	if((n = n % wordlength()) > 0) {
		rbits = ~(~0 << n) & x;
		
		rbits = rbits << (wordlength() - n);
		x = x >> n;
		x = x | rbits;
	}
	return x;
}

int wordlength(void)
{
	int i;
	unsigned v = (unsigned) ~0;
	for(i = 1;(v = v >> 1) > 0;i++)
		;
	return i;
}
