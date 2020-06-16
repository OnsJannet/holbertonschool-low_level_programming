#include "holberton.h"
/**
 * int _abs - a function that computes the absolute value of an integer.
 *@c: The number to be checked
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (0 - i);
	}
}
