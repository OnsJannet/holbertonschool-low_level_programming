#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 * Return: nothing;
 */

void _puts(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');
}
