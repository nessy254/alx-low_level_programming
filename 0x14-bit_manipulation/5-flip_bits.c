#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number to be flipped
 * @m: number to be flipped
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int a = n;
	unsigned long int b = m;

	while (a != b)
	{
		if (a & 1)
			count++;
		a = a >> 1;
		b = b >> 1;
	}
	return (count);
}
