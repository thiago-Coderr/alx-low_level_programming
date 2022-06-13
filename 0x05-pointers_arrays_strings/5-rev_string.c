#include "main.h"
#include <string.h>

/**
 * rev_string - the function name
 * @s: is the parameter
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}	
