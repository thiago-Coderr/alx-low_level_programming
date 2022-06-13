#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints only the half of a string
 * @str: the parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i, tam, half;

	tam = strlen(str);
	if (str[0] == '\0')
	{
		printf("\n");
	}
	else
	{
		if (tam % 2 == 0)
		{
			half = tam / 2;
			for (i = half; i < tam; i++)
			{
				printf("%c", *(str + i));
			}
			printf("\n");
		}
		else
		{
			half = ((tam - 1) / 2) + 1);
			for (i = half; i < tam; i++)
			{
				printf("%c", *(str + i));
			}
			printf("\n");
		}
	}
}
