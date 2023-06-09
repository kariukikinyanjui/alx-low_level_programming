#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string holds the character to be located
 * @c: character to be located
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
