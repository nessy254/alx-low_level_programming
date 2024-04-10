#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the first value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;
	int center;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		center = (l + r) / 2;

		if (array[center] == value)
			return (center);

		if (array[center] > value)
			r = center - 1;

		if (array[center] < value)
			l = center + 1;
	}
	return (-1);
}
