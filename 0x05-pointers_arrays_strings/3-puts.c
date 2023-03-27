#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: function parameter
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
