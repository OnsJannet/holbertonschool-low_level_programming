#include "holberton.h"
/**
* print_times_table - multiplication table
* @n: integer
*
*/
void print_times_table(int n)
{
int a, i, j;

if (n <= 15 && n >= 0)
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
a = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (a > 99)
{
_putchar(a / 100 + 48);
_putchar((a / 10) % 10 + 48);
_putchar(a % 10 + 48);
}
else if (a > 9)
{
_putchar(' ');
_putchar(a / 10 + 48);
_putchar(a % 10 + 48);
}
else if (j == 0)
{
_putchar(a + 48);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(a + 48);
}
}
_putchar('\n');
}
}
