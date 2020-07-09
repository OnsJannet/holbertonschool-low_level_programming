
#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b:amount of needed memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
