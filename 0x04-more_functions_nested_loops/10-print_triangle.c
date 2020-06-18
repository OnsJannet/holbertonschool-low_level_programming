#include "holberton.h"
/**
* print_triangle - print a triangle.
*
*@size : the size of triangle.
*/
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
i = 0;
{
while (i < size)
{
j = size - i;
while (j > 1)
{
_putchar(' ');
j--;
}
k = 0;
while (k <= i)
{
_putchar('#');
k++;
}
i++;
_putchar('\n');
}
}
}
