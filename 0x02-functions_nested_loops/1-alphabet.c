#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;
	char alph[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 
	'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; i < 26; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
