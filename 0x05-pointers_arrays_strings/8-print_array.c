#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elemts of an array of integers
 * @a: array
 * @n: how much to print
 * return: 0;
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
