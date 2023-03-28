#include "main.h"

/**
 * rev_string - reverses a string
 * @s: function parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a;
	int b;
	char c;

	for (a = 0; s[a] != '\0'; a++)
		;
	for (b = 0; b < a / 2; b++)
	{
		c = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = c;
	}
}
