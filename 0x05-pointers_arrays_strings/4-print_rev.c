#include "holberton.h"
/**
 * print_rev - prints string in reverse
 * @s: string to print
 *
 * Return: 0
 */
void print_rev(char *s)
{
int i = 0, j;
while (i != '\0')
{
i++;
i--;
for (j = i ; j != -1 ; j--)
{
}
_putchar(s[j]);
_putchar('\n');
}
}
