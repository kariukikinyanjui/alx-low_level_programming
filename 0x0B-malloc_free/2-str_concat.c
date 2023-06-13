#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: array of characters
 * @s2: array of characters
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int b, q;

	b = q = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[b] != '\0')
	{
		b++;
	}
	while (s2[q] != '\0')
	{
		q++;
	}
	s3 = malloc(sizeof(char) * (b + q + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	while (s1[b] != '\0')
	{
		s3[b] = s1[b];
	}
	while (s2[q] != '\0')
	{
		s3[b] = s2[b];
		b++, q++;
	}
	s3[b] = '\0';
	return (s3);
}
