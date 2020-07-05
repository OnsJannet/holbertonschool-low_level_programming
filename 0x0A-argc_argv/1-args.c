#include <stdio.h>

/**
 * main - Prints number of arguments except of program
 *
 * @argc: Number of arguments
 * @argv: Value of arguments
 *
 * Return: Returns an int
**/

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", (argc - 1));

return (0);

}
