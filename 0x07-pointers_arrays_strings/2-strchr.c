#include "holberton.h"
/**
* _strchr- locates a character in a string.
* @s: string
* @c: a char
*
*
* Return: c or 0
*/
char *_strchr(char *s, char c)
{
	int start = *s;
start = 0;
while (s[start] != '\0')
{ 
if (s[start] == c)
{
	return (&s[star])
}
start++;
}
return (0);
}