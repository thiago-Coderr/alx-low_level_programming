#include "main.h"

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar(last + '0');
	return (last);
}
