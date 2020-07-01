#include "holberton.h"
/**
* _strlen_recursion - returns the length of a string.
* @s: A pointer to char
* Return: rev char
*/
int _strlen_recursion(char *s)
{
	int i = 1;
	{
	if (*s == '\0')
		return (0);
	return (i + _strlen_recursion(s + 1));
}
}
