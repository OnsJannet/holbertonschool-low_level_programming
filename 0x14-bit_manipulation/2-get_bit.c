#include "holberton.h"

/**
 * get_bit - Function that returns the bit on index position of a number
 * @n: Number
 * @index: Position of the bit
 * Return: Returns 1 when bit is 1 and 0 otherwise
**/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(index) * 8))
		return (-1);

	if ((n >> index) & 1)
		return (1);
return (0);
}
