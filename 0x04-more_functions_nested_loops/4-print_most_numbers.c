#include "holberton.h"
/**
*print_most_numbers(void) - function that prints most numbers.
* Return: Always 0.
*/
void print_most_numbers(void)
{
char a;
for (a = '0' ; a <= '9'; && a != '2'; a != '4' ; a++)
{
  _putchar(a);
}
}
