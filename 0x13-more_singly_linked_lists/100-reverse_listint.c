#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		*head = current->next;
		current->next = previous;
		previous = current;
		current = *head;
	}

	*head = previous;
	return (*head);
}
