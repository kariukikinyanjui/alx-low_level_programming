#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: array of characters
 * @s2: array of characters
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	size_t lenA, lenB;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	lenA = strlen(s1);
	lenB = strlen(s2);

	p = (char *)malloc((lenA + lenB + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	strcpy(p, s1);

	strcat(p, s2);

	return (p);
	free(p);


}
