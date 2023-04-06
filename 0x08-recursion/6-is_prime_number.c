#include "main.h"

/**
 * is_prime_number_assist - function which takes two arguments
 * @n: integer to be checked
 * @m: test integer
 * Return: return 1 if true and 0 if false
 */
int is_prime_number_assist(int n, int m)
{
	if (n < 2)
	{
		return (0);
	}

	else if (m * m > n)
	{
		return (1);
	}
	else if (n % m == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_assist(n, m + 1));
	}
}
/**
 * is_prime_number - checks for prime number
 * @n: input integer
 * Return: n
 */
int is_prime_number(int n)
{
	return (is_prime_number_assist(n, 2));
}
