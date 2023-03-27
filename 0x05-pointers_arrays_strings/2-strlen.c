#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: function parameter
 * Return: return (b)
 */

int _strlen(char *s)
{
	int a;
	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		b++;
	}
	return (b);
}
