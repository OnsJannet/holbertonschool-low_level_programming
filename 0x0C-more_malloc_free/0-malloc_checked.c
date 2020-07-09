#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * malloc_checked- check the code for Holberton School students.
 *@b : unsigned int of needed memory
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *p;

ptr = malloc(b);

if (p == NULL)
	exit(98);

return (p);
}
