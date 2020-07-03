#include "holberton.h"
/**
*_isupper- is a function that checks for uppercase character.
**@c: an integer
*Return: Always 0.
*
**/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
