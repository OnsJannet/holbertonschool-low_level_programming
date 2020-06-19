#include <stdio.h>

/**
* main - prime factor
* @n: integer
*
*
*/
int main(int n)
{
int i, j, r;

i = n;
while (i <= n && i > 2)
{
if (n % i == 0)
for (j = 1; j < i; i++)
{
if (i % j == 0)
print("%d\n", i);
}
i--;
}
	return(0);
}
