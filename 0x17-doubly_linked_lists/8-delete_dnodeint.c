#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletese the node at index
 * 'index' of a linked list
 * @head: double pointer to the head of a doubly linked list
 * @index: integer value
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;

		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (index > 0 && current != NULL)
	{
		current = current->next;
		index--;
	}
	if (current == NULL)
		return (-1);
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
