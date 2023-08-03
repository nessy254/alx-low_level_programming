#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	int m;
	unsigned long int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	num = n;
	m = 0;
	while (num > 0)
	{
		m++;
		num = num >> 1;
	}
	for (m--; m >= 0; m--)
	{
		if (n >> m & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	_putchar('\n');
}
