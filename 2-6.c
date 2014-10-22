#include <stdio.h>

/*
unsigned getbits(unsigned x,int p,int n)
{
	return (x >> (p + 1 -n)) & ~(~0 << n);
}
 */

unsigned setbits(unsigned x,int p,int n,unsigned y);

main()
{
	printf("%u\n",setbits(10,4,3,7));
}

unsigned setbits(unsigned x,int p,int n,unsigned y)
{
	return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);

//	return (x & ~(~(~0 << n) << (p + 1 - n))) | ((y & ~(~0 << n)) << (p + 1 - n));
}
