#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints many nubers
 * @n: integer wil be parameter
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}

