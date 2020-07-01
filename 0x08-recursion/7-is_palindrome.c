#include "holberton.h"

/**
 * find_end - find end position of string
 * @s: string
 *
 * Return: end position of string
 */

int find_end(char *s)
{
	if (*s == 0)
		return (0);

	return (find_end(s + 1) + 1);
}


/**
 * check_palindrome - checks for palindrome by comparing characters in string
 * @s: string
 * @start: starting character position
 * @end: end character position
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{

	if (s[start] != s[end])
		return (0);

	if (start >= end)
		return (1);

	return (check_palindrome(s, start + 1, end - 1));

}

/**
 * is_palindrome - identifies strings as palindromes
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int end = (find_end(s) - 1);

	return (check_palindrome(s, 0, end));
}
