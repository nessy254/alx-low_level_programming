#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * using the Interpolation search algorithm
 * @array: arr of integers
 * @size: num of elements in the array
 * @value: value to find
 *
 * Return: first index of the value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r && value >= array[l] && value <= array[r])
	{
		i = l + (((double)(r - l) / (array[r] -
						array[l])) * (value - array[l]));

		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		if (array[i] < value)
			l = i + 1;
		else
			r = i - 1;
	}

	printf("Value checked array[%lu] is out of range\n", l);
	return (-1);
}
