#include "holberton.h"
/**
 * _checkprime - checks for prime numbers
 * @n: number to check
 * @x: divisor
 * Return: if the number is prime
 */
int _checkprime(int n, int x)
{
	if (x == 1)
		return (1);

	if (n % x == 0)
		return (0);

	return	(_checkprime(n, x - 1));
}
/**
 * is_prime_number - check if the number is prime
 * @n: number to check
 * Return: if the number is prime
 */
int is_prime_number(int n)
{
	int x = n - 1;

	if (n <= 1)
		return (0);

	return (_checkprime(n, x));
}
