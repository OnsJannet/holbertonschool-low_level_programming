#include "holberton.h"
/**
 * _puts - prints string
 * @str: string to print
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		i++;
	}
	_putchar('\n');
}

