#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - void
 *Return: null
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

{
if (n > 0)
{
printf("%d is Positive\n", n);
}
/* negative*/
else if (n < 0)
{
printf("%d is negative\n", n);
}
/* zero*/
else
{
printf("%d zero\n", n);
}
return (0);
}
}
