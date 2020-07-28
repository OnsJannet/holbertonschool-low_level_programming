#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node and returns the head node's data
 * @head: pointer to a struc
 * Return: Returns nothing
**/
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = tmp->n;
	*head = (*head)->next;

	free(tmp);
	return (i);
}

/**
 * delete_nodeint_at_index - Deletes a node in a specific position
 * @head: Pointer to a pointer pointing to a struct
 * @index: Index of the list where the new node should be deleted
 * Return: 1 if success or -1 if not
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *nextNode;
	unsigned int i;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}

	for (i = 0; tmp != NULL && i < (index - 1); i++)
		tmp = tmp->next;

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	nextNode = (tmp->next)->next;
	free(tmp->next);
	tmp->next = nextNode;
	return (1);
}
