#include "holberton.h"
#include <stdio.h>
/**
*_strlen - a function that returns the length of a string.
*@s: string to check length of a string
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != 0)
i++;
return (i);
}
