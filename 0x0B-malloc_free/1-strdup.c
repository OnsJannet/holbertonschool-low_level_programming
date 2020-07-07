#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - copies input string in newly allocated memory
 * @str: input string
 * Return: pointer to duplicate string or NULL if failure
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int size;

	size = 0;
	i = 0;
	if (str == 0)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;

	}
		size++;
		s = malloc(sizeof(char) * size);
		if (s == 0)
			return (NULL);
			while (i < size)
			{
				s[i] = str[i];
				i++;
			}
			s[i] = '\0';
			return (s);
		}
		