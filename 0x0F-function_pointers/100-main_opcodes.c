#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: argument count
 * @agrv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int noBytes;
	char *mPtr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	noBytes = atoi(argv[1]);

	if (noBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	mPtr = (char *)main;

	for (a = 0; a < noBytes; a++)
	{
		printf("%02x ", mPtr[a]);
	}
	printf("\n");
	return (0);
}
