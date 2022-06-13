#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print every even position of a string
 * @str: pointer parameter of puts2 function
 * Return: void
 */
void puts2(char *str)
{
	int i, tam;

	tam = strlen(str);
	if (str[0] == '\0')
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < tam; i++)
		{
			if (i % 2 == 0)
			{
				printf("%c", *(str + i));
			}
		}
		printf("\n");
	}
}
