#include "holberton.h"
/**
* print_triangle - prints a triangle.
* @size: size of triangle
* Return: 0
*/
void print_triangle(int size)
{
int c, c2, space;
if (size <= 0)
{
_putchar('\n');
}
for (c = 0; c < size; c++)
{
for (c2 = 0; c2 < size; c2++)
{
space = size - c - 1;
if (c2 < space)
{
_putchar(' ');
}
else
_putchar('#');
}
_putchar('\n');
}
}
