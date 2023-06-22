#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function tha prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * ...: variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list mx;

	va_start(mx, n);


	for (a = 0; a < n; a++)
	{
		int num = va_arg(mx, int);

		printf("%d", num);

		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(mx);

	printf("\n");
}
