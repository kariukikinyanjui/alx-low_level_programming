#include "lists.h"

/**
 * free_dlistint - a function that frees a list
 * @head: a pointer to the head of a doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
