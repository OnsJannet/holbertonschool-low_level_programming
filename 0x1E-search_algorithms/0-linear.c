#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - a function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: the array to search
 * @size:  the size of the array
 * @value: the searched for value
 *
 * Return: first index where value is located, -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
