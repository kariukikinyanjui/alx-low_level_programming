#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 (Error) 0 (Success)
 */
int main(int argc, char **argv)
{
	int cents, c25, c10, c5, c2, c1, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	c25 = 25;
	c10 = 10;
	c5 = 5;
	c2 = 2;
	c1 = 1;
	coins = 0;

	coins += cents / c25;
	cents %= c25;

	coins += cents / c10;
	cents %= c10;

	coins += cents / c5;
	cents %= c5;

	coins += cents / c2;
	cents %= c2;

	coins += cents / c1;

	printf("%d\n", coins);
	return (0);

}
