#include "main.h"

/**
 * more_numbers - prints ten times nuber list
 * Return: no return;
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
	}
}
