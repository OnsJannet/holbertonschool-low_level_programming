#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements
 * @h: Pointer to an int constant
 * Return: The number of nodes
**/
size_t print_listint(const listint_t *h)
{
unsigned int nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}

return (nodes);
}
