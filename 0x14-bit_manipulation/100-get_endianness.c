#include "holberton.h"

/**
 * get_endianness - Function to determine if machine is Little or Big Endian
 * Return: 1 if little endian, 0 if big endian
**/
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;

	if (*c)
		return (1);
	else
		return (0);
}
