#include <stdio.h>

float fahr_celsius(int fahr);

main()
{
	int i;

	for(i = 0;i < 300;i = i + 20)
		printf("%3d %6.1f\n",i,fahr_celsius(i));

	return 0;
}

float fahr_celsius(int fahr)
{
	return 5.0 / 9.0 * (fahr - 32);
}

