#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - gives us the last n
 * @n: integer parameter
 * Return: @n will be the result
 */
int print_last_digit(int n)
{
	int last;
	
	last = abs(n % 10);
	_putchar(last + '0');
	return (last);
}
