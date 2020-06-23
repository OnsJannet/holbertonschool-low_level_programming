#include "holberton.h"
/**
 * print_rev - prints string in reverse
 * @s: string to print
 *
 * Return: 0
 */

void print_rev(char *s)
{
char *i;
i = s;
while (*s != '\0')
{
s++;
}
while (s != i)
{
s--;
_putchar(*s);
}
_putchar('\n');
}
