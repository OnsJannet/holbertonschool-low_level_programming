#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
int i, j = 0;
char temp;
while (s[j] != '\0')
j++
j--;
for (i = 0 ; i < j ; j--, i++)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
