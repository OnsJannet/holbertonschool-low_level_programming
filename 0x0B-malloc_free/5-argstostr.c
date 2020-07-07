#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Allocates memory in a 2 dimensional array of ints..
 *
 * @ac: arg count.
 * @av: arg value.
 *
 * Return: Returns the created array.
**/

char *argstostr(int ac, char **av)
{

int i, j, k, l, count = 0;
char *ar, *output;

if (ac == 0 || av == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != 0; j++)
		count++;
count++;
}

count += 1;
ar = malloc(sizeof(char) * count);
output = ar;

if (ar == NULL)
	return (NULL);

for (k = 0; k < ac; k++)
{
	for (l = 0; av[k][l] != 0; l++)
	{
		*ar = av[k][l];
		ar++;
	}
*ar = '\n';
ar++;
}

return (output);

}
