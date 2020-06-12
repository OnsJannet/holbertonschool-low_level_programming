#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	int n;
	int n1;

	for (n = '0'; n <= '9'; ++n)
	{
		for (n1 = '0'; n1 <= '9'; ++n1)
		{
			if (n != '0' || n1 != '0')
			{
				putchar(',');
				putchar(' ');
			}
			putchar(n);
			putchar(n1);
		}
	}
	putchar('\n');
	return (0);
}
