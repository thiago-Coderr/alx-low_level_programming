#include "main.h"

/**
 * jack_bauer - prints minutes of the day
 * Return: void
 */
void jack_bauer()
{
	int h1 = 0, h2 = 0;
	int m1, m2;
	int a = 9;

	while (h2 <= 2)
	{
		if (h2 == 2)
		{
			a = 3;
		}
		while (h1 <= a)
		{
			m2 = 0;
			while (m2 <= 5)
			{
				m1 = 0;
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
