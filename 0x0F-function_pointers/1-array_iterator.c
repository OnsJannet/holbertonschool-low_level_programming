#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter.
 * @array: Name passed
 * @size: Number of iterations
 * @action: Points to a function
 * Return: Returns nothing
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
