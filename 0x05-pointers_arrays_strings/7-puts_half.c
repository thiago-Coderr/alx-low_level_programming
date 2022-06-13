#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * puts_half - function
 * @str: will be used
 */
void puts_half(char *str)
{
int len, i;
len = strlen(str);
if (len % 2 == 0)
{
for (i = len / 2; i < len; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
else if (len == 0)
{
printf("\n");
}
else
{
for (i = ((len - 1) / 2) + 1; i < len; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
}
