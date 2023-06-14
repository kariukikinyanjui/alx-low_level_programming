#include "main.h"

/**
 * _strdup - duplicate string
 * @str: string of characters
 * Return: NULL
 */
char *_strdup(char *str)
{
	int a, k = 0;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	
	a = 0;

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
		str2[k] = str[k];

	return (str2);
}
