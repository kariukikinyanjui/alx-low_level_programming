#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum range of value stored
 * @max: minimum range of value stored
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int a, b;
	int *tab;

	if (min > max)
	{
		return (NULL);
	}

	b = max - min + 1;

	tab = malloc(sizeof(int) * b);


	if (tab == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		tab[a] = min++;
	}
	return (tab);
}
