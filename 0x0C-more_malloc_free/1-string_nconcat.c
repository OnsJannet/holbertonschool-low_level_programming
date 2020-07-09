#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Calculates length of a string
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0
**/

int _strlen(char *s)
{
int i = 0;

while (*(s + i) != '\0')
	i++;

return (i);
}

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: String No. 1
 * @s2: String No. 2
 * @n: Number of bytes.
 *
 * Return: Returns a char.
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *ptr;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

if (n >= (unsigned int)_strlen(s2))
	n = (unsigned int)_strlen(s2);

ptr = malloc(((_strlen(s1) + n) * sizeof(char) + 1));

if (ptr == NULL)
	return (NULL);
else
{
	for (i = 0; i < (unsigned int)_strlen(s1); i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
}

ptr[i + j] = '\0';
return (ptr);
}
