#include "holberton.h"
/**
*more_numbers - print 10 times the numbers.
*
*/
void more_numbers(void)
{
int a, b;
for (b = 0 ; b <= 9 ; b++)
{
for (a = 0 ; a <= 14 ; a++)
{
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
}
putchar('\n');
}
}
