#include "holberton.h"
/**
 * puts_half - prints half the string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
int i, length = 0;

	while (str[length] != 0)
		length++;
	if (length > 1)
		for (i = length / 2 + (length % 2 == 0); i < length ; i++)
			_putchar(str[i]);
	_putchar('\n');
}
