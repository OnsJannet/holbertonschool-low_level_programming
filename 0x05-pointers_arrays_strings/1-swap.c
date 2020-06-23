#include "holberton.h"
/**
* swap_int - a function that swaps the values of two integers.
* @a: 1st integer
* @b: 2nd integer
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
