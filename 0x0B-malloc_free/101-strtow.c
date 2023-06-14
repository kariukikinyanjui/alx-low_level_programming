#include "main.h"

/**
 * word_count - helper function
 * @str: string to use
 * Return: number of words
 */
int word_count(char *str)
{
	int word, count = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			word = 0;
		}
		else if (!word)
		{
			word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow -splits a string into words
 * @str: string to split
 * Return: NULL if it fails
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int a, b = 0, length = 0, words, c = 0, start, end;

		while (*(str + length))
		{
			length++;
			words = word_count(str);
		}
		if (words == 0)
		{	
			return (NULL);
		}
		mat = (char **)malloc(sizeof(char *) * (words + 1));

		if (mat == NULL)
		{
			return (NULL);
		}
			for (a = 0; a <= length; a++)
			{
				if (str[a] == ' ' || str[a] == '\0')
				{
					if (c)
					{
						end = a;
						tmp = (char *)malloc(sizeof(char) * (c + 1));

						if (tmp == NULL)
						{
							return (NULL);
						}
						while (start < end)
						{
							*tmp++ = str[start++];
							*tmp = '\0';
							mat[b] = tmp - c;
							b++;
							c = 0;
						}
					}
					else if (c++ == 0)
					{
					start = a;
					}

				}
			}
	mat[b] = NULL;

	return (mat);
}
