#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the end
 *@head: Pointer
 *@n : node
 * Return: adresse or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end;

	end = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	new_node->prev = end;
	new_node->next = NULL;
	return (new_node);

}
