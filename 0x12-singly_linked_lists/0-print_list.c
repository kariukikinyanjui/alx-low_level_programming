#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: parameter
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{	/* num keeps track of the number of nodes in the list */
	size_t num = 0;

	while (h != NULL)
	{	/* checks if the str member of the current node is null */
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
/*
 * function moves to the next node by updating h to h->next
 * and increments num variable to keep track of the number of nodes
 */
		h = h->next;
		num++;
	}
/* returns number of in the list */
	return (num);
}
