#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value 1
 * @b: value 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
