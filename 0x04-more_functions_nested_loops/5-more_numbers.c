#include "holberton.h"
/**
*more_numbers - print 10 times the numbers.
*
*/
void more_numbers(void)
{
{
int n;
int l;
for (l = 0; l < 10 ; l++)
{
for (n = 0; n < 15; n++)
{
if (n > 9)
{
putchar(n / 10 + '0');
}
putchar(n % 10 + '0');
}
putchar('\n');
}
}
