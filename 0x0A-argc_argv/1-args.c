#include <stdio.h>

/**
 * main - Entry point
 * @agrc: number of command-line arguments passed to the program
 * @agrv: array of strings containing those arguments
 * Return: 0
 */
int main(int agrc, char **agrv __attribute__((unused)))
{
	printf("%d\n", agrc - 1);

	return (0);
}
