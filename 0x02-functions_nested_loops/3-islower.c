#include "main.h"

/**
 * _islower - functions to check a letter
 * @c:integer
 * Return: will return true false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
