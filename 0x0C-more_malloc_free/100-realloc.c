#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old memory
 * @old_size: size of allocated memory
 * @new_size: size of new memory block
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tab;
	char *prev_ptr;
	unsigned int k;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	tab = malloc(new_size);
	if (tab == NULL)
	{
		return (NULL);
	}
	prev_ptr = tab;
	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
		{
			tab[k] = prev_ptr[k];
		}
	}
	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)

			tab[k] = prev_ptr[k];
	}
	free(ptr);
	return (tab);

}
