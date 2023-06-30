#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: pointer to the head of the list
 */
/* function takes a pointer to the head of the list as input */
void free_list(list_t *head)
{/* initializes two pointers */
/* current is set to head to start traversing the list */
	list_t *current = head;
	list_t *next;
/*
 * loop iterates until current becomes NULL indicating that the
 * end of the list has been reached
 */
	while (current != NULL)
	{/* function assigns the next point to current->next */
	/*
	 * this is done to store the next node's address before
	 * freeing the current node
	 */
		next = current->next;
/* function frees the memory allocated for the string current->str */
		free(current->str);
/* function then frees the memory allocated for the current node current */
		free(current);
/*
 * after freeing the current node, the function updates current to point
 * next node to continue the iteration
 */
		current = next;
/*
 * loop continues until current becomes NULL indicating that
 * all nodes in the list have been freed
 */
	}
}
