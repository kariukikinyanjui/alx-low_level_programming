#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putcher(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putcher(alphabet);

	putcher('\n');

	return (0);
}
