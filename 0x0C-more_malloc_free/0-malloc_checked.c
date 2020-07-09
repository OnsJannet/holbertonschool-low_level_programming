#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b:amount of needed memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == NULL)
	exit(98);

return (p);
}
