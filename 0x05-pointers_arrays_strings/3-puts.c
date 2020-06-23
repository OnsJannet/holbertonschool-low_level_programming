#include "holberton.h"
/**
 * _puts - prints string
 * @str: string to print
 *
 * Return: 0
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != 0)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
