#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = *head;
	listint_t *rest = (*head)->next;
	listint_t *reversed_rest = reverse_listint(&rest);

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	first->next->next = first;
	first->next = NULL;

	*head = reversed_rest;
	return (*head);
}
