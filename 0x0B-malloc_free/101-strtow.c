#include "main.h"
#include <string.h>

/**
 * strtow -splits a string into words
 * @str: string to split
 * Return: NULL if it fails
 */
char **strtow(char *str)
{
	int a, b, count, index, start, len;
	char **c;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = 0;
	a = 0;

	while (str[a] != '\0')
	{
		while (str[a] == ' ')
		{
			a++;
		}
		if (str[a] != '\0')
		{
			count++;
			while (str[a] != '\0' && str[a] != ' ')
				a++;
		}

	}
	c = (char **)malloc((count + 1) * sizeof(char *));

	if (c == NULL)
		return (NULL);

	index = 0;
	a = 0;

	while (str[a] != '\0')
	{
		while (str[a] == ' ')
			a++;

		if (str[a] != '\0')
		{
			start = a;
			len = 0;

			while (str[a] != '\0' && str[a] != ' ')
			{
				a++;
				len++;
			}
			c[index] = (char *)malloc((len + 1) * sizeof(char));
			if (c[index] == NULL)
			{
				for (b = 0; b < index; b++)
					free(c[b]);
				free(c);
				return (NULL);
			}
			strncpy(c[index], str + start, len);
			c[index][len] = '\0';
			index++;
		}
	}
	c[count] = NULL;
	return (c);

}
