#include "function_pointers.h"

/**
 * print_name - function that takes a name as input
 * @name: pointer to a character array representing the name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
