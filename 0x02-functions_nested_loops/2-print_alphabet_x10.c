#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int k;
	char i;

	for (k = 1; k <= 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
