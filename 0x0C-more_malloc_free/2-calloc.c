#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * and initializes the memory to zero
 * @nmemb: number of elements in array
 * @size: size of each elements in bytes
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	tab = malloc(size * nmemb);

	if (tab == NULL)
	{
		return (NULL);
	}

	memset(tab, 0, size * nmemb);

	return (tab);
}
