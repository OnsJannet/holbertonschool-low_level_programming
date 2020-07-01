#include "holberton.h"

/**
 * find_square - finds square root
 * @n: integer
 * @x: possible factors
 *
 * Return: -1 if n does not have a natural square root,
 * return value of square root otherwise
 */

int find_square(int n, int x)
{
	if ((x * x) == n)
		return (x);

	if (x > (n / x))
		return (-1);

	return (find_square(n, x + 1));
}

/**
 * _sqrt_recursion - returns natural square root of an int
 *@n : integer
 * Return: -1 if an integer does not have a natural square root,
 * value of square root otherwise
 */


int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (find_square(n, 1));

}
