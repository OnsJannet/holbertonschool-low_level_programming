#include <stdio.h>
/**
  * main - entry point
  * @argc: takes in string
  * @argv: takes in array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
