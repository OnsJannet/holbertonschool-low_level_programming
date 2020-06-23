#include "holberton.h"
/**
*puts2 -  prints 1 char out of 2
*@str: char
*
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

