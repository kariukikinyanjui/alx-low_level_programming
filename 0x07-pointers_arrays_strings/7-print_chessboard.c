#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to a two-dimensional character array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			putchar(a[b][c]);

			putchar(' ');
		}

		putchar('\n');
	}
}
