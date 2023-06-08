#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * _sqrt_aide - helper function
 * @onset: function parameter
 * @finish: function parameter
 * @n: function parameter
 * Return: if n does not have a natural sqaure root, return -1
 */
int _sqrt_aide(int n, int onset, int finish)
{
	if (onset <= finish)
	{
		int x = onset + (finish - onset) / 2;
		int square = x * x;

		if (square == n)
		{
			return (x);
		}
		else if (square < n)
		{
			return (_sqrt_aide(n, x + 1, finish));
		}
		else
		{
			return (_sqrt_aide(n, onset, x - 1));
		}
	}
	return (finish);
}

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
		return (_sqrt_aide(n, 1, n));
	}
}
