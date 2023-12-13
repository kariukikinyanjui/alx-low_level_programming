#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array using
 * the interpolation search algorithm
 * @array: pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		double ratio = (double)(high - low) / (array[high] - array[low]);

		pos = low + (ratio * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	if (low <= high)
		printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
