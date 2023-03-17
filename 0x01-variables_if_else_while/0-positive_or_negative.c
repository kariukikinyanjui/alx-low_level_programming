#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
	if (n > 0)
	{
		printf("The number is positive\n");
	}
	else if (n < 0)
	{
		printf("The number is negative\n");
	}
	else
	{
		printf("The number is zero\n");
	}
	return (0);
