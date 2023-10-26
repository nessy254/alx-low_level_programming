#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary number
 * Return: unsigned int, or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;
	int j = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (b[j])
	{
		n = (n << 1) + (b[j] - '0');
		j++;
	}
	return (n);
}
