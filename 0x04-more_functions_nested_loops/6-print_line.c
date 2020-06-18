#include "holberton.h"
/**
*print_line -  draws a straight line in the terminal.
*@n: int
*/
void print_line(int n)
{
int l;
l = 0;
if (n > 0)
{
while (l < n)
{
_putchar('_');
i++;
}
}
_putchar('\n');
}
