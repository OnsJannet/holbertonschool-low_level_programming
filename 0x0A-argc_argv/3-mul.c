#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
  * main - print a multiplication of 2 numbers
  * @argc: numbers of arguments
  * @argv: value
  * Return: an int
  */
int main(int argc, char const *argv[])
{

	int i, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
