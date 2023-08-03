#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary represenation to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leadingZeroes;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	leadingZeroes = 1;

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (!leadingZeroes)
			{
				_putchar('0');
			}
		}
		else
		{
			leadingZeroes = 0;
			_putchar('1');
		}
		mask >>= 1;
	}
}
