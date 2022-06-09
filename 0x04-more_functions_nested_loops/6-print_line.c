#include "main.h"

/**
 * print_line - prints lines
 * @n: is the parameter
 * Return: no return
 */
void print_line(int n)
{
	int i;
        
	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
}
