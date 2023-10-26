#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of the bit to be cleared
 * Return: 1 if it worked, -1 if there is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
