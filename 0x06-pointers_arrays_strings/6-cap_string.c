#include "holberton.h"
/**
 * cap_string - converts string words to be capitalized
 * @s: input string to have all words capitalized
 *
 * Return: string after conversion to Capitalize words
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (i == 0)
		{
			if ((s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i - 1] == ' ' || s[i - 1] ==  ',' ||
		s[i - 1] ==  ';' || s[i - 1] ==  '.' || s[i - 1] ==  '!' ||
		s[i - 1] ==  '?' || s[i - 1] ==  '(' || s[i - 1] ==  ')' ||
		s[i - 1] ==  '{' || s[i - 1] ==  '}' ||
		s[i - 1] == 9 || s[i - 1] == 10 ||  s[i - 1] == 0 || s[i - 1] == 32)
		{
			i++;

			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}
	}
	return (s);
}
