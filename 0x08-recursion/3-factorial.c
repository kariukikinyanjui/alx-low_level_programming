#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: function parameter
 * Return: if n is lower than 0 return -1,
 * otherwise return 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
