#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: parameter 1
 * @n: parameter 2
 * Return: 0
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k != (n - 1))
			printf("%d, ", a[k]);
		else
			printf("%d", a[k]);
	}
	printf("\n");
}
