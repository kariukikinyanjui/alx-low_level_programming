#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index 'index' of a linked list
 * @head: double pointer to the head of the list
 * @index: function parameter
 * Return: 1(success) -1(failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int num = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (current != NULL && num < index)
	{
		prev = current;
		current = current->next;
		num++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);
	return (1);
}
