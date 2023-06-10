#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of command-line arguments passed to the program
 * @argv: array of strings containing those arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int b;

	for (b = 0; b < argc; b++)
	{
	printf("%d: %s\n", b, argv[b]);
	}
	return (0);
}
