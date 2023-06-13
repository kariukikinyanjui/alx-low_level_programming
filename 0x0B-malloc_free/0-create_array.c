#include "main.h"

/**
 * create_array - creates an array of chars and initalizes it
 * with a specific char.
 * @size: size of array
 * @c: character to initialize the array with
 * Return: NULL if size = 0. A pointer to the array if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *create_array;

	create_array = malloc(sizeof(*create_array) * size);

	if (size == 0)
	{
		return (NULL);
	}
	for (unsigned int a = 0; a < size; a++)
	{
		create_array[a] = c;
	}
	return (create_array);
}
