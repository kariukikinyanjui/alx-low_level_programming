#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 * Return: address of the new element, null if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Nnode;
/* if str is NULL it means there is no string to add to the new node */
	if (str == NULL)
	{
		return (NULL);
	}
/* function creates a new node ensuring the allocated memory is sufficient */
	Nnode = malloc(sizeof(list_t));
/* if memory allocation fails it returns NULL to indicate failure */
	if (Nnode == NULL)
	{
		return (NULL);
	}
/*
 * strdup allocates memory for a new string and copies
 * content of str into it
 */
	Nnode->str = strdup(str);
/* if operation fails, the function frees the memory allocated for the Nnode */
	if (Nnode->str == NULL)
	{
		free(Nnode);
		return (NULL);
	}
/*
 * if string duplication is successful,
 *
 * the function determines the length of the string
 * and assigns it to Nnode->len
 */
	Nnode->len = strlen(str);
/*
 * function updates the pointers to insert the new node
 * at the beginning of the list
 */
	Nnode->next = *head;
/* this step effectively makes the new node the new head of the list */
	*head = Nnode;
/* return the address of the new node */
	return (Nnode);
}
