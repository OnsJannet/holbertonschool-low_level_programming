#include "holberton.h"
/**
*_strncat- is a function that concatenates two strings.
* @src: 1st char
* @dest: 2nd char
* @n: and int
*
*Return: dest.
*
**/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
