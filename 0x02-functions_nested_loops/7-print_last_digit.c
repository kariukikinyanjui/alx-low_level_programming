#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @a: function parameter
 *
 * Return: i
 */
int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (a < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
