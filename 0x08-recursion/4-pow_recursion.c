#include "main.h"

/**
 * _pow_recursion - power function
 * @x: base
 * @y: exponent
 * Return: if y is less than 0 return -1
 * otherwise return 1
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
