#include "holberton.h"

/**
 * _strlen - Swaps integers wih pointers.
 * @s: is a pointer to a char
 * Return: Always 0.
 */
int _strlen(const char *s)
{
int i = 0;

while (*(s + i) != '\0')
	i++;

return (i);
}

/**
 * create_file - Function to create a file
 * @filename: name of the created file
 * @text_content: string to write to the file
 * Return: 1 if success, -1 if failure
**/
int create_file(const char *filename, char *text_content)
{
	int fd = 0, len = 0;

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT);
		return (1);
	}

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	len = write(fd, text_content, _strlen(text_content));
	if (len == -1)
		return (-1);

	close(fd);
	return (1);
}
