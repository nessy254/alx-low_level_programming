#include <stdio.h>
#include "function_pointers.h"
#include "_putchar.c"
/**
 * int_index - a function that searches for an integer
 * in an array of integers
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: the index of the first element, if no match -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
