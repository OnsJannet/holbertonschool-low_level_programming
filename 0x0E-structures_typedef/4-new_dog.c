#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - finds string length in order to malloc properly
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int i;

for (i = 0; *s != '\0'; s++)
{
	i++;
}

return (i);
}

/**
 * _strncpy - copies string.
 *
 * @dest: is a pointer to a char.
 *
 * @src: is a pointer to a char.
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src)
{
int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

return (dest);
}

/**
 * new_dog - Creates function with name and owner copies
 *
 * @name: Name parameter
 * @age: Age parameter
 * @owner: Owner parameter
 *
 * Return: Returns nothing
**/

dog_t *new_dog(char *name, float age, char *owner)
{
char *newName;
char *newOwner;
dog_t *newDog;

newDog = malloc(sizeof(struct dog));

if (newDog == NULL)
{
	return (NULL);
}

newName = malloc((_strlen(name) + 1));
if (newName == NULL)
{
	free(newDog);
	return (NULL);
}

newOwner = malloc((_strlen(owner) + 1));
if (newOwner == NULL)
{
	free(newName);
	free(newDog);
	return (NULL);
}

newName = _strncpy(newName, name);
newOwner = _strncpy(newOwner, owner);

newDog->name = newName;
newDog->age = age;
newDog->owner = newOwner;

return (newDog);
}
