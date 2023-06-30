#include "lists.h"
#include "stdlib.h"
#include "string.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 * Return: address of the new element, NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Nnode;

	if (str == NULL)
	{
		return (NULL);
	}
	Nnode = malloc(sizeof(list_t));
	if (Nnode == NULL)
	{
		return (NULL);
	}

	Nnode->str = strdup(str);
	if (Nnode->str == NULL)
	{
		free(Nnode);
		return (NULL);
	}
	Nnode->len = strlen(str);
	Nnode->next = NULL;

	if (*head == NULL)
	{
		*head = Nnode;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = Nnode;
	}
	return (Nnode);
}
