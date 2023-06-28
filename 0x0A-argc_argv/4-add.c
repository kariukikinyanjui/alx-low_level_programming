#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: integer input
 * Return: 1 if it's a digit 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int num;
	int a;
	int b;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!_isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[a]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
