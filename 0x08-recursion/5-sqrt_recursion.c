#include "main.h"

/**
 * sqrt_assist - recursive helper function that takes two arguments
 * @n: number whose square root is to be found
 * @a: current guess for square root
 * Return: a
 */
int sqrt_assist(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	else if (a * a == n)
	{
	return (a);
	}
	else
	{
		return (sqrt_assist(n, a + 1));
	}
}
/**
 * _sqrt_recursion - square root function
 * @n: number whose square root is to be found
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
	return (sqrt_assist(n, 1));
	}
}
