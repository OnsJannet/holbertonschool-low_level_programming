#include "holberton.h"
/**
*_isdigit- a function that checks for a digit.
**@c: an integer
*Return: Always 0.
*
**/
int _isdigit(int c)
{
c = '0';
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
