#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @i: parameter to be checked
 *
 * Return: Always i
 */
int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
