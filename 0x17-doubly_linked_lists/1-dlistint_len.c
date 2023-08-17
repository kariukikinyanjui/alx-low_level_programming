#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked list
 * @h: pointer to the head of the doubly linked list
 * Return: total count of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
