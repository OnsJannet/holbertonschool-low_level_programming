#include "holberton.h"
/**
*  _abs- a function that computes the absolute value of an integer.
*@i: is a integer
* Return: Always 0.
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (0 - i);
	}
}
