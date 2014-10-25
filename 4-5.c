#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'
#define NAME 'n'

int getop(char []);
void push(double);
double pop(void);
void mathfnc(char []);

main()
{
	int type;
	double op2;
	char s[MAXOP];

	while((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case NAME:
				mathfnc(s);
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if(op2 != 0.0)
					push(pop() / op2);
				else
					printf("error:zero divisor\n");
				break;
			case '\n':
				printf("\t%.8g\n",pop());
				break;
			default:
				printf("error:unknown command %s\n",s);
				break;
		}
	}
	return 0;
}

void mathfnc(char s[])
{
	double op2;
		
	if(strcmp(s,"sin") == 0)
		push(sin(pop()));
	else if(strcmp(s,"cos") == 0)
		push(cos(pop()));
	else if(strcmp(s,"exp") == 0)
		push(exp(pop()));
	else if(strcmp(s,"pow") == 0) {
		op2 = pop();
		push(pow(pop(),op2));
	} else
		printf("error:%s not supported\n",s);
}

int getop(char s[])
{
	int c,i;

	while((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	i = 0;
	if(islower(c)) {
		while(islower(s[++i] = c = getch()))
			;
		s[i] = '\0';
		if (c != EOF)
			ungetch(c);
		if (strlen(s) > 1)
			return NAME;
		else
			return c;
	}

	if(!isdigit(c) && c != '.')
		return c;
	if (isdigit(c))
		while(isdigit(s[++i] = c = getch()))
			;
	if(c == '.')
		while(isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if(c != EOF)
		ungetch(c);
	return NUMBER;
}
