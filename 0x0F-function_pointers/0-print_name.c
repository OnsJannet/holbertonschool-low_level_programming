#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Name passed
 * @f: Function pointed
 * Return: Returnsn nothing
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
