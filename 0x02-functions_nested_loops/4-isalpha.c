#include "main.h"

/**
 * _isalpha - ckecks the alpha
 * @c: integer
 * Return: true or false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
