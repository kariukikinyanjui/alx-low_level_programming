#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strdup - duplicate string
 * @str: string of characters
 * Return: NULL
 */
char *_strdup(char *str)
{
	int a, k = 0;
	char *str2;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[a] != '\0')
	{
		a++;
	}

	str2 = malloc(sizeof(char) * (a + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k]; k++)
		str[k] = str[k];

	return (str2);
}
