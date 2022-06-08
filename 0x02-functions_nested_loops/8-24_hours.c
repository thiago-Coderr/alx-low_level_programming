#include "main.h"

void jack_bauer()
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
				if (m < 10)
				{
					_putchar(':');
					_putchar('0');
					_putchar(m + '0');
				}
				else
				{
					_putchar(':');
					_putchar(m + '0');
				}
				_putchar('\n');
			}
			else
			{
				_putchar(h + '0');
				if (m < 10)
				{
					_putchar(':');
					_putchar('0');
					_putchar(m + '0');
				}
				else
				{
					_putchar(':');
					_putchar(m + '0');
				}
			}
		}
	}
}
