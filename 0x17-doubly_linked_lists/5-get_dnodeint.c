#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns nth node of a dlistint_t linked list
 *@head: Pointer
 * Return: node's position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *i = head;
	unsigned int counter;

	for (counter = 0; i != NULL; counter++)
	{
		if (counter == index)
			return (i);
		i = i->next;
	}
	return (NULL);
}