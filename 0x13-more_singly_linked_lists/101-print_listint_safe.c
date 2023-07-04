#include "lists.h"

/**
 * print_listint_safe - a function that prints a linked list
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t num = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		num++;
		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			printf("\n");
			exit(98);
		}
		current = current->next;
	}
	return (num);
}
