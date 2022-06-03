#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
	if (x == 9)
	{
	putchar(x % 10 + '0');
	}
	else
	{
         putchar(x % 10 + '0');
	 putchar(', ');
	}
	}
	putchar('\n');
	return (0);
}
