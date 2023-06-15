#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer input
 * Return: 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *tab = malloc(b);

	if (tab == NULL)
	{
		free(tab);
		exit(98);
	}
	return (tab);
}
