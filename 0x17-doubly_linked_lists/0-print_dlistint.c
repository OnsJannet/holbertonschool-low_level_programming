#include "lists.h"
/**
 * print_dlistint - a function that print the elements of a list
 *@h: Pointer
 * Return: elemnts
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;
 
for (i = 0; h!= NULL; i++)
{
	printf("%d\n", h->n);
	h = h ->next;
}
return (i);
}
