#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes
 * Return: return a pointer (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *g;
	unsigned int a, b, ran1, ran2;

	a = 0;
	b = 0;
	ran1 = 0;
	ran2 = 0;

	while (s1 && s1[ran1])
		ran1++;
	while (s2 && s2[ran2])
		ran2++;
	if (n < ran2)
	{
		g = malloc(sizeof(char) * (ran1 + n + 1));
	}
	else
	{
		g = malloc(sizeof(char) * (ran1 + ran2 + 1));
	}
	if (!g)
	{
		return (NULL);
	}
	while (a < ran1)
	{
		g[a] = s1[a];
		a++;
	}
	while (n < ran2 && a < (ran1 + n))
	{
		g[a++] = s2[b++];
	}
	while (n >= ran2 && a < (ran1 + ran2))
	{
		g[a++] = s2[b++];
	}
	g[a] = '\0';
	return (g);
}
