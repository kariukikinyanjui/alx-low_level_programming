#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += a;
		}
		int temp = b;

		b += a;
		a = temp;
	}
	printf("%d\n", sum);

	return (0);
}
