#include "holberton.h"
#include <stdio.h>
/**
* main - computes and prints the sum of all the multiples of 3 or 5 below 1024
*
* Return: void.
*/
int main(void)
{
int j, i, r3, r5, n;
j = 0;
n = 1024;
for (i = 1; i < n; i++)
{
r3 = i % 3;
r5 = i % 5;
if ((r3 == 0) || (r5 == 0))
{
j = i + j;
}
}
printf("%d\n", j);
return (0);
}
