#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: pointer to the string to search for the prefix substring
 * @accept: pointer to a string of characters
 * that are considered valid in the prefix substring
 * Return: number of bytes (count)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;

				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			return (count);
		}
		s++;
	}
	return (count);
}
