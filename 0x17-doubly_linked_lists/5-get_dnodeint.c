#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth
 * node of a linked list
 * @head: pointer to the header of a doubly linked list
 * @index: integer value
 * Return: pointer to the node found at the specific index, NULL if node
 * doesn't exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	return (current);
}
