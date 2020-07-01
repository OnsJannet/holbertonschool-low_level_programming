#include "holberton.h"
/**
* _print_rev_recursion - a function that prints a string in reverse.
* @s: A pointer to string
* Return: the char
*/
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (s[0]);
	}
}