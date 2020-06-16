#include "holberton.h"
/**
*_isalpha function that checks for alphabetic character.
*@c: The number to be checked
* Return: Always 0.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
 else
{
return (0);
}
}
