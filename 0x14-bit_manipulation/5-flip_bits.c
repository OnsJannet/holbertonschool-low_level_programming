#include "holberton.h"

/**
 * flip_bits - Returns number flipped bits to get one number to another
 * @n: First number
 * @m: Second number
 * Return: Return the total of changed bits
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total = 0;
	unsigned long int XOR = n ^ m;

	while (XOR)
	{
		total += (XOR & 1);
		(XOR >>= 1);
	}

	return (total);
}
