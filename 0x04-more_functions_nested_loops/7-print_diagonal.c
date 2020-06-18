#include "holberton.h"
/**
* print_diagonal - a function that draws a diagonal line on the terminal
*@n: integer
*
* Return: void
*/
void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (b = 0; b < n; b++)
{
for (a = 1; a <= b; a++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
