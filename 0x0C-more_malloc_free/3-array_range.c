#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *array = malloc(sizeof(int) * (max - min + 1));
	int i;

	if (min > max)
		return (NULL);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
		array[i] = min + i;
	return (array);
}
