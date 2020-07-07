#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates an array of chars, and initializes it w/ a char
 * @size: input size of array
 * @c: initializing char
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{

unsigned int i;
char *ar = malloc(size * sizeof(c));

if (size == 0)
	return (NULL);

	if (ar != NULL)
	{
		for (i = 0; i < size; i++)
			ar[i] = c;

		return (ar);
	}
	else
		return (NULL);

}
