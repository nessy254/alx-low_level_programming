#include "main.h"
#include <stdio.h>
/**
 * get_endianness - check the endianness
 * Return: 0 if big endian or 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *a;

	a = (char *) &a;
	if (*a == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
