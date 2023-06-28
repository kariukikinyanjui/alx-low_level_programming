#include "main.h"

/**
 * palindrome_aide - recursive helper function that
 * takes arguments
 * @s: input string
 * @start: starting index
 * @end: ending index
 * Return: 0 fails, 1 success
 */
int palindrome_aide(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_aide(s, start + 1, end - 1));
}
/**
 * is_palindrome - a function checks if a string
 * is a palindrome
 * @s: input string
 * Return: 1 if its a palindrome, 0 if its not
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return (palindrome_aide(s, 0, len - 1));
}
