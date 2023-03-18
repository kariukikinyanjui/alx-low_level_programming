#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
