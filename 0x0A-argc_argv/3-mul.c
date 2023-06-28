#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command-line arguments passed to the program
 * @argv: array of pointers that contains the arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int d1, d2, d3;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	d1 = atoi(argv[1]);
	d2 = atoi(argv[2]);
	d3 = d1 * d2;


	printf("%d\n", d3);

	return (0);
}
