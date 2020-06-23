#include "holberton.h"
/**
 * puts_half - prints half the string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;
	char c;

	for (i = 0; str[i] != 0; i++)
	{
	}
	j = (i + 1) / 2;
	for (; str[j] != 0; j++)
	{
		c = str[j];
		_putchar(c);
	}
	_putchar('\n');
}
