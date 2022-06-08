#include "main.h"

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putshar(last + '0');
	_putchat('\n');
}
