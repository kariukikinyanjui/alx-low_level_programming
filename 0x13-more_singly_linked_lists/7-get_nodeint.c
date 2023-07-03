#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a linked list
 * @head: head of the list
 * @index: desired node
 * Return: NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (num == index)
		{
			return (current);
		}
		current = current->next;
		num++;
	}

	return (NULL);
}
