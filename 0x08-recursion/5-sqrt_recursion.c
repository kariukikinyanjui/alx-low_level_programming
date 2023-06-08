#include "main.h"
#include <stdio.h>

/**
 * _sqrt_aide - helper function
 * @m: iterator
 * @n: square to calculate
 * Return: if n does not have a natural sqaure root, return -1
 */
int _sqrt_aide(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	else if (m * m == n)
	{
		return (m);
	}
	else
	{
		return (_sqrt_aide(n, m + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the
 * square root of a number
 * @n: square to calculate
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_aide(n, 0));
	}
}
