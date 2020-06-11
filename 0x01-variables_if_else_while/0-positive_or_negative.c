#include <stdlib.h>
#include <time.h>
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
/*local variable definition*/
int n
/* positive*/
if (n > 0)
{
printf("is Positive");
}
/* negative*/
else if (n < 0)
{
printf("is negative");
}
/* zero*/
else
{
printf("zero");
}
return (0);
