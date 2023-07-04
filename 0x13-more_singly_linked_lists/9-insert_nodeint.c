#include "lists.h"

/**
 * aide_func - helper function that takes an integer n
 * @n: integer input
 * Return: pointer to the new node
 */
listint_t *aide_func(int n)
{
	listint_t *Nnode = malloc(sizeof(listint_t));

	if (Nnode == NULL)
	{
		return (NULL);
	}
	Nnode->n = n;
	Nnode->next = NULL;
	return (Nnode);
}
/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index for new node
 * @n: value of the data of the new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;
	listint_t *current = *head;
	listint_t *Nnode = aide_func(n);


	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		listint_t *Nnode = aide_func(n);

		if (Nnode == NULL)
		{
			return (NULL);
		}
		Nnode->next = *head;
		*head = Nnode;
		return (Nnode);
	}

	while (current != NULL && num < idx - 1)
	{
		current = current->next;
		num++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (NULL);
	}

	if (Nnode == NULL)
	{
		return (NULL);
	}
	Nnode->next = current->next;
	current->next = Nnode;
	return (Nnode);

}
