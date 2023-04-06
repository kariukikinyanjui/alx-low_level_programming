#include "main.h"

/**
 * is_palindrome_assist - function that takes three arguments
 * @s: string to be checked
 * @first: starting index
 * @last: ending index
 * Return: 1 if true and 0 if false
 */
int is_palindrome_assist(char *s, int first, int last)
{
	if (first >= last)
	{
		return (1);
	}
	else if (first[s] != last[s])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_assist(s, first + 1, last - 1));
	}
}
/**
 * is_palindrome - checks if the reverse of that string
 * is the same as the original string
 * @s: string to be checked
 * Return: 1 if true 0 if false
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	return (is_palindrome_assist(s, 0, len - 1));
}
