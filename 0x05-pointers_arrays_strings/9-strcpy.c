#include "main.h"

/**
 * _strcpy - copies the string to the buffer
 * @src: source array
 * @dest: destination array
 * Return: copies string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
