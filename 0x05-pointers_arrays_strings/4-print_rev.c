#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints the string in reversed way
 * @s: pointer parameter
 * Return: void
 */
void print_rev(char *s)
{
	int tam;
	int i;

	tam = strlen(s);
	for (i = tam - 1; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
