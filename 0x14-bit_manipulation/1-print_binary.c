#include "holberton.h"

/**
 * print_binary - Converts an int to binary
 * @n: Passed int to binary
 * Return: Returns nothing
**/
void print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
