#include <stdio.h>

/**
 * main - Prints all possile combinations of single-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar((digit % 10) + '0');
		if (digit == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
