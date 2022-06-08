#include "main.h"

int print_last_digit(int n)
{
	int last;

	if (n >= 0 && n <= 9)
	{
		return (n);
	}
	else
	{
		last = n % 10;
		return (last);
	}
}
