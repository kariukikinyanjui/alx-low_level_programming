#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list mx;
	const char *str;

	va_start(mx, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(mx, char*);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("nil");
		}
		if (separator != NULL && a < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(mx);

	printf("\n");
}
