#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
	putchar(x % 10 + '0');
	}

	for (x = 'a'; x < 'g'; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
