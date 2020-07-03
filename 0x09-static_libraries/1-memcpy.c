#include "holberton.h"
/**
* _memcpy - copies memory area.
* @dest: A destination
* @src: a source
* @n: The number of bytes to be copied.
*
* Return: A pointer to the copied memory dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
