#include "main.h"
#include <string.h>

/**
 * *_strcpy - is the function
 * @dest: is a parameter
 * @src: another parameter
 * Return: @dest will be returned
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
