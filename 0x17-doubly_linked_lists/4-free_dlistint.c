#include "lists.h"
/**
 * free_dlistint - a function that frees a list
 *@head: Pointer
 * Return: elemnts
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i = head;
	while (i != NULL)
	{
		i = i->next;
		free(head);
		head = i;
	}
}
