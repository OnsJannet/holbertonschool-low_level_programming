#include "holberton.h"
/**
 * puts2 - prints 1 char out of 2
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
int i, j;
for (i = 0 ; str[i] != '\0' ; i++)
{
for (j = 0 ; j < i ; j++)
{
if (j % 2 == 0)
}
_putchar (str[i]);
}
}

