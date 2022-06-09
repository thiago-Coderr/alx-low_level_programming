#include "main.h"

/**
 * print_diagonal - prints the diagonal
 * @n: is the number of breaked lines
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j < i + 1; j++)
			{   
				_putchar(' ');
			}
		}
	}
}
