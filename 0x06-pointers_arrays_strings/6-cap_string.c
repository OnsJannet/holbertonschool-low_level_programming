#include "holberton.h"

/**
 * cap_string - capitalizes each word in a string
 * @s: string
 *
 * Return: pointer to string
 */


char *cap_string(char *s)
{
	int index, special_index;

	char special[13] = {' ', '\t', '\n', ',', ';', '.', '!',
			    '?', '"', '(', ')', '{', '}'};

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		for (special_index = 0; special_index < 13; special_index++)
		{
			if (s[index] == special[special_index])
			{
				if (s[index + 1] >= 'a' && s[index + 1] <= 'z')
					s[index + 1] -= 32;
			}
		}
	}

	return (s);
}
