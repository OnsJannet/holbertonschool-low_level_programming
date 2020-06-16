#include "holberton.h"
#include "holberton.h"
/**
*print_last_digit(int n)- function that prints the last digits.
*@n: an integer
*Return: Always 0.
*/
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i = 0 - i;
	}
	_putchar(i + '0');
	return (i);
}

