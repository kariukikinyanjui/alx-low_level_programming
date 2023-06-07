#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string
 * similar to strlen
 * @s: character pointer
 * Return: number of bytes in the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
