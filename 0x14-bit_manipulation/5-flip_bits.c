#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flop to get from one number to another
 * @n: function parameter 1
 * @m: function parameter 2
 * Return: number of flip bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int num = 0;

	while (xor != 0)
	{
		if (xor & 1)
		{
			num++;
		}
		xor >>= 1;
	}
	return (num);
}
