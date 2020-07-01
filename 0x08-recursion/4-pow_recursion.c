#include "holberton.h"
/**
* _pow_recursion - a function that returns the value
* of x raised to the power of y.
* @x: 1st integer
* @y: 2nd integer
* Return: the value of the 1st int to the power of the 2nd int
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
