#include "lists.h"
/**
 * dlistint_len - a function that returns the elements in a list
 *@h: Pointer
 * Return: number of elemnts
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;
for (i = 0; h != NULL; i++)
{
	h = h->next;
}
return (i);
}
