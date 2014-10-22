#include <stdio.h>

int invert(int x,int p,int n);

main()
{
	printf("%d\n",invert(10,4,3));
}

int invert(int x,int p,int n)
{
	return x ^ (~(~0 << p+1) & (~0 << p+1-n));
//x ^ (~(~0 << n) << (p + 1 - n))
}
