#include "main.h"

/**
 * jack_bauer - prints minutes of the day
 * Return: void
 */
void jack_bauer()
{
	int h1 = 0, h2 = 0;
	int m1 = 0, m2 = 0;
	int a;

	while (h2 <= 2)
	{
		if (h2 == 2)
		{
			a = 3;
		}
		while (h1 <= a)
		{
			while (m2 <= 5)
			{
				while (m1 <= 9)
				{
					_putchar(h2 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m2 + '0');
					_putchar(m1 + '0');
					_putchar('\n');
					m1++;
				}
				m2++;
			}
			h1++;
		}
		h2++;
	}
}
