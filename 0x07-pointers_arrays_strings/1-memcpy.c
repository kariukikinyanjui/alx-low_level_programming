#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to copy
 * Return: destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
