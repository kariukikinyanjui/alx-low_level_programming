#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: double pointer to the head of the list
 * @n: int value for the new node
 * Return: address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Nnode = malloc(sizeof(listint_t));

	if (Nnode == NULL)
	{
		return (NULL);
	}

	Nnode->n = n;
	Nnode->next = NULL;

	if (*head == NULL)
	{
		*head = Nnode;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = Nnode;
	}
	return (Nnode);
}
