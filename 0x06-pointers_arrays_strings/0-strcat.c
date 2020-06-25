#include "holberton.h"
/**
*_strcat- is a function that concatenates two strings.
* @src: 1st char
* @dest: 2nd char
*
*Return: dest.
*
**/
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
