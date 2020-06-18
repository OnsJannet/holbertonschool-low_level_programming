#include "holberton.h"
/**
*print_most_numbers - function that prints most numbers.
* Return: Always 0.
*/
void print_most_numbers(void)
{
char a;
for (a = '0' ; a <= '9'; a++)
{
if (a != 50 && a != 52)
{
_putchar(a);
}
}
_putchar ('\n');
}
