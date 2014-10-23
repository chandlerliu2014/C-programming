#include <ctype.h>
#include <stdio.h>

double atof_(char s[]);
double pow_(double,int);

main()
{
	printf("%f\n",atof_("123.45e-6"));

	return 0;
}

double atof_(char s[])
{
	double n,power;
	int i,sign,sign1,num;
	
	i = 0;
//	if (isspace(s[i++])) //ignore space
//		;
	for(i = 0;isspace(s[i]);i++)
		;
	sign = (s[i] == '-') ? (-1) : 1;
	if(s[i] == '-' || s[i] == '+')
		i++;
	for(n = 0.0;isdigit(s[i]);i++)
		n = n * 10.0 + s[i] - '0';
	if(s[i] == '.')
		i++;
	for(power = 1.0;isdigit(s[i]);i++) {
		n = n * 10.0 + s[i] - '0';
		power *= 10.0;
	}
	if(s[i] == 'e')
		i++;
	
	sign1 = (s[i] == '-') ? (-1) : 1;
	if(s[i] == '+' || s[i] == '-')
		i++;
	for(num = 0;isdigit(s[i]);i++)
		num = num * 10 + s[i] - '0';
	
	return sign * n / power * pow_(10.0,(sign1 * num));
	
}

double pow_(double n,int m)
{
	int i;
	double result;

	result = 1.0;
	if(m < 0) {
		m = -m;
		for(i = 0;i < m;i++) 
			result /= n;
	}
	else{
		for(i = 0;i < m;i++)
			result *= n;
	}
	return result;
	
}
