#include "holberton.h"
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
      

