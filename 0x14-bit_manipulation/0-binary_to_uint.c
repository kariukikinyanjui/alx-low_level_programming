#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a constant character
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int j = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[j] != '\0')
	{
		if (b[j] == '0' || b[j] == '1')
		{
			a = (a << 1) | (b[j] - '0');
			j++;
		}
		else
		{
			return (0);
		}
	}
	return (a);
}
