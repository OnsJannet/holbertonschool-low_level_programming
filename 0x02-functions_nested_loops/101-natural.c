#include <stdio.h>
/**
*main - 0
*
*Return: 0
*/
void main(void)
{
	long int i, j;

	j = 0;
	i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
		i++;
	}
	printf("%ld\n", j);
}
