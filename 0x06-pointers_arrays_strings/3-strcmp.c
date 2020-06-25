#include "holberton.h"
/**
*_strcmp- is a function that compares two strings.
* @s1: 1st char
* @s2: 2nd char
*
*Return: an integer
*
**/
int _strcmp(char *s1, char *s2)
{
	int j;
	for (j = 0; s1[j] != '\0' && s2[j] != '\0'; j++)
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
		return 0; 
}

