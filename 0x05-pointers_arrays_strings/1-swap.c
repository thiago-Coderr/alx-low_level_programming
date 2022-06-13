#include "main.h"

/**
 * swao_int -swaps the numbers by pointers
 * @a: the first parameter
 * @b: the second parametr
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
