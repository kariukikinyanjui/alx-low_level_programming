#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position
 * @h: double pointer to the head of a doubly linked list
 * @idx: integer value 1
 * @n: integer value 2
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;

	if (h == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
			(*h)->prev = new_node;

		*h = new_node;
	}
	else
	{
		while (current != NULL && idx > 1)
		{
			current = current->next;
			idx--;
		}
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->prev = current;
		new_node->next = current->next;

		if (current->next != NULL)
			current->next->prev = new_node;

		current->next = new_node;
	}
	return (new_node);
}
