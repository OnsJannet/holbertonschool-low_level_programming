#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times, followed by a new line.
 */
void print_alphabet_x10(void);
{
int i;
char c;
for (i = 0; i < 10; i++)
{
for (c = 'c'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}

