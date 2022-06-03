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
         putchar(x % 10 + ', ');
	}
	putchar('\n');
	return (0);
}
