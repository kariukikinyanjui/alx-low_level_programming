#include "main.h"
/**
 * leet - leet encoding
 * @q: string to be encoded
 * Return: q
 */

char *leet(char *q)
{
	int i;
	int j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; q[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (q[i] == a[j])
				q[i] = b[j];
		}
	}
	return (q);
}

