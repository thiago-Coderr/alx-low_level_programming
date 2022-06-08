#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints minutes of the day
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (h < 10)
			{
				printf("0%d", h);
				if (m < 10)
				{
					printf(":0%d\n", m);
				}
				else
				{
					printf(":%d\n", m);
				}
			}
			else
			{
				printf("%d", h);
				if (m < 10)
				{
					printf(":0%d\n", m);
				}
				else
				{
					printf(":%d\n", m);
				}
			}
		}
	}
}
