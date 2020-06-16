#include "holberton.h"
/**
 * int _abs(int) - a function that computes the absolute value of an integer.
 *@n: an integer
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
