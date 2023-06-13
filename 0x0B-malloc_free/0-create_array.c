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
	unsigned int a;

	create_array = malloc(sizeof(char) * size);

	if (size == 0 || create_array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		create_array[a] = c;
	}
	return (create_array);
}
