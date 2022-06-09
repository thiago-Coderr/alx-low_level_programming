#include "main.h"

/**
 * _isdigit - checks from 0 to 9
 * @c: the parameter of function
 * Return: true or false
 */
int _isdigit(int c)
{
	if ( c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
