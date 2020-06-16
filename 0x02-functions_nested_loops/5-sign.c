#include "holberton.h"
/**
 * print_sign - function that prints the sign of a number.
 *@c: The number to be checked
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
