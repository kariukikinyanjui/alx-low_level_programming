#include "variadic_functions.h"

/**
 * sum_them_all - function that calculates the sum of all its parameters
 * @n: number of parameters
 * @...: a variable number of parameters
 * Return: if n == 0, return 0 else return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mx;
	unsigned int a, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(mx, n);

	for (a = 0; a < n; a++)
	{
		int digit = va_arg(mx, int);

		sum += digit;
	}
	va_end(mx);

	return (sum);
}
