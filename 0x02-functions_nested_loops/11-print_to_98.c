#include "main.h"

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
			}
			else
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 98)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
			}
			else
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

