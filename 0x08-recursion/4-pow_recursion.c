#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - a function that return the value of x
 * raised to the power of y
 * @x: function parameter 1
 * @y: function parameter 2
 * Return: if y < 0, -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
