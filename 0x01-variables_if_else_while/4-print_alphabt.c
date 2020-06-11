#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	char ap;

	for (ap = 'a'; ap - 1 < 'z'; ++ap)
	{
		if ((ap != 'q') && (ap != 'e'))
		{
			putchar(ap);
		}
	}
	putchar('\n');
	return (0);
}
