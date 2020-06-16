#include "holberton.h"
/**
*jack_bauer-  function that prints every minute of the day of Jack Bauer.
*Return: Always 0.
*/
void jack_bauer(void)
{
  int hours;
  int minutes;
for (hours = 0 ; hours <= 23; hours++)
{
for (minutes = 0 ; minutes <= 59; minutes++)

{
  _putchar(hours / 10 + '0');
  _putchar(hours % 10 + '0');
  _putchar(':');
  _putchar(minutes / 10 + '0');
  _putchar(minutes % 10 + '0');
  _putchar('\n');
}
}
}
