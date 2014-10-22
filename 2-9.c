int bitcount(unsigned x)
{
	int n;
	for (n = 0;x != 0;x & x-1)
		n++;

	return n;
}

//amazing method
