#include "holberton.h"
/**
*more_numbers - print 10 times the numbers.
*
* Return: 0
*/
void more_numbers(void)
{
int a, b;
for (b = 0 ; b <= 10 ; b++)
{
for (a = 0 ; a <= 14 ; a++)
{
putchar(a / 10 + '0');
putchar(a % 10 + '0');
}
putchar('\n');
}
}
