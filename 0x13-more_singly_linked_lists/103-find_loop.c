#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *once = head;
	listint_t *twice = head;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	while (twice != NULL && twice->next != NULL)
	{
		once = once->next;
		twice = twice->next->next;

		if (once == twice)
		{
			once = head;
			while (once != twice)
			{
				once = once->next;
				twice = twice->next;
			}
			return (once);
		}
	}
	return (NULL);
}
