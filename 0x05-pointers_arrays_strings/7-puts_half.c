#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: function parameter
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int a;
	int b = 0;

	for (a = 0; str[a] != '\0'; a++)
		b++;
	if (b % 2 == 0)
	{
		for (a = b / 2; str[a] != '\0'; a++)
			_putchar(str[a]);
		_putchar('\n');
	}
	else if (b / 2 == 0)
	{
		for (a = (b - 1) / 2; str[a] != '\0'; a++)
			_putchar(str[a]);
		_putchar('\n');
	}
}
