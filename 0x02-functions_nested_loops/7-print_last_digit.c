#include "main.h"

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = (-1) * n;
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
}
