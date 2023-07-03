#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: double pointer to the head of the list
 * @n: function parameter of type int
 * Return: address of new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Nnode = malloc(sizeof(listint_t));

	if (Nnode == NULL)
	{
		return (NULL);
	}

	Nnode->n = n;
	Nnode->next = *head;
	*head = Nnode;

	return (Nnode);
}
