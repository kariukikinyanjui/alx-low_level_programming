#include "lists.h"

/**
 * free_listint_safe - a function that frees a list
 * @h: double pointer to the head of the list
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		num++;
	}
	*h = NULL;
	return (num);
}
