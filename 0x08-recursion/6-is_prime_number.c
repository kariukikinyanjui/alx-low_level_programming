#include "main.h"

/**
 * aide_func - helper functions that performs
 * the actual recursion
 * @a: number to be checked
 * @b: divisor to test
 * Return: recursive case
 */
int aide_func(int a, int b)
{
	if (a <= 2)
	{
		return ((a == 2) ? 1 : 0);
	}
	if (a % b == 0)
	{
		return (0);
	}
	if (b * b > a)
	{
		return (1);
	}
	return (aide_func(a, b + 1));
}

/**
 * is_prime_number - a function that checks if the input
 * integer is a prime number
 * @n: input integer
 * Return: 1 if prime otherwise return 0
 */
int is_prime_number(int n)
{
	return (aide_func(n, 2));
}
