#include "main.h"
#include <stddef.h>

/**
 * _strcpy - copies the string to the buffer
 * @src: source array
 * @dest: destination array
 * Return: copies string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
