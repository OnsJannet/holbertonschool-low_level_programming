#include "holberton.h"

/**
 * read_textfile - Write a function that reads a
 * text file and prints it to the POSIX standard output.
 * @filename: Name of the file.
 * @letters: Numbers of letters it should read and print
 * Return: Number of letters it should read and print.
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buf;
	ssize_t length = 0;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	length = read(fd, buf, letters);
	if (length == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	length = write(STDOUT_FILENO, buf, length);
	if (length == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (length);
}
