#include <stdio.h>
#include "function_pointers.h"
#include "_putchar.c"
/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: array.
 * @size: size of the array.
 * @action: pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
