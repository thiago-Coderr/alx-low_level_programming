#include "main.h"
#include <stdio.h>

/**
 * The program prints every aray number
 * print_array - prints the array
 * @a: the array
 * @n: array size
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}
	}
	printf("\n");
}