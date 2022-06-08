#include "main.h"

/**
 * _abs - check absolutely nothing
 * @c: integer
 * Return: the resul
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * (-1));
	}
	else
	{
		return (c);
	}
}
