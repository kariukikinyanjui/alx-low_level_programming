#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet;

	srand(time(0));
	alphabet = rand() - RAND_MAX / 2;
	char alphabet = 'a';

	while (alphabet <= 'z')

	{
		putchar(alphabet);

		alphabet++;
	}

	putchar('\n');
	return (0);
}
