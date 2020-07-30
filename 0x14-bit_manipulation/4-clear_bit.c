#include "holberton.h"
/**
 * clear_bit - Function that sets 0 on index bit position of a number
 * @n: Number
 * @index: Position of the bit
 * Return: Returns 1 if it worked, -1 if not
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0;

	if (index > (sizeof(index) * 8))
		return (-1);

	num = (1 << index);
	*n = *n & ~num;
	return (1);
}
