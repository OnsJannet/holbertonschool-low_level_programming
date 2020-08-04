#include <stdio.h>
#include "holberton.h"

/**
 * error97 - Displays syntaxis error message
**/
void error97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error98 - Displays can't read error message
 * @name: Pointer to de name of the unredeable file
**/
void error98(char *name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
	exit(98);
}

/**
 * error99 - Displays can't write error message
 * @name: Pointer to de name of the unwritable file
**/
void error99(char *name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
	exit(99);
}

/**
 * error100 - Displays can't close error message
 * @value: Pointer to de name of the uncloseable file
**/
void error100(int value)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", value);
	exit(100);
}


/**
 * main - Function to copy a file into another one
 * @argc: Amount of arguments
 * @argv: Value of the arguments
 * Return: Always 0.
**/
int main(int argc, char *argv[])
{
	int fd = 0, fd2 = 0, rlen = 0, wlen = 0;
	char buf[1024];

	if (argc != 3)
		error97();
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error98(argv[1]);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		error99(argv[2]);
	rlen = read(fd, buf, 1024);
	if (rlen == -1)
		error98(argv[1]);
	wlen = write(fd2, buf, rlen);
	if (wlen == -1)
		error99(argv[2]);
	while (rlen == 1024)
	{
		rlen = read(fd, buf, 1024);
		if (rlen == -1)
			error98(argv[1]);
		wlen = write(fd2, buf, rlen);
		if (wlen == -1)
			error99(argv[2]);
	}
	if (close(fd) == -1)
		error100(fd);
	if (close(fd2) == -1)
		error100(fd2);
	return (0);
}
