#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 *
 * @min: Min number of the array.
 * @max: Max number of the array.
 *
 * Return: Returns a pointer.
**/

int *array_range(int min, int max)
{
int i;
int j;
int *p;

if (min > max)
	return (NULL);
j = ((max - min) + 1);

p = malloc(j *sizeof(int));

if (p == NULL)
	return (NULL);

else
{
	for (i = 0; i < j; i++)
	{
		p[i] = min;
		min++;
	}

return (p);
}
}
