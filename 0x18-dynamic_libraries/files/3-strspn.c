#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for substring
 * @accept: characters that prefix substring must include
 * Return: length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		l = 0;
		while (accept[l] != '\0')
		{
			if (s[j] == accept[l])
				k =  k + 1;
			l++;
		}
		j++;
	}
	return (k);
}
