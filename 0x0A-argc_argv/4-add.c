#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of n arguments
 *
 * @argc: Number of arguments
 * @argv: Value of arguments
 *
 * Return: Returns an int
**/

int main(int argc, char *argv[])
{

int i;
unsigned int sum = 0;

for (i = 1; i < argc; i++)
{
	if (*argv[i] >= 48 && *argv[i] <= 57)
		sum += atoi(argv[i]);
	else
	{
		printf("Error\n");
		return (1);
	}
}
printf("%d\n", sum);

return (sum);

}
