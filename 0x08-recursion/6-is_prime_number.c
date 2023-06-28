#include "main.h"

/**
 * is_prime_number - a function that checks if the input
 * integer is a prime number
 * @n: input integer
 * Return: 1 if prime otherwise return 0
 */
int is_prime_number(int n)
{
	int b;

	if (n <= 1)
	{
		return (0);
	}

	for (b = 2; b * b <= n; b++)
	{
		if (n % b == 0)
		{
			return (0);
		}
	}
	return (1);
}
