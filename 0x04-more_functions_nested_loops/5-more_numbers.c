#include "holberton.h"
/**
* more_numbers - print digit 10 times from 0 to 14
*
*
*Return: 0
*/
void more_numbers(void)
{
int a, i;
a = 0;
for (i = 0; i <= 9; i++)
{
while (a <= 14)
{
if (a > 9)
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
a++;
}
_putchar('\n');
a = 0;
}
}
