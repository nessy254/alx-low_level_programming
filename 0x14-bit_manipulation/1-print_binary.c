#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
