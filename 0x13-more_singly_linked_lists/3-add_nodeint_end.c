#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: Pointer to a pointer of a struct constant
 * @n: int constant
 * Return: The number of nodes
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *tmp = *head;

	newNode = malloc(sizeof(newNode));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newNode;

return (newNode);
}
