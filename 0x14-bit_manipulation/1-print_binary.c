#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int l = 0;

	while (m > 0)
	{
		if (n & m)
		{
			l = 1;
		}
		if (l)
		{
			if (n & m)
			{

				_putchar('1');
			}
			_putchar('0');
		}
		m >>= 1;
	}
	if (!l)
	{
		_putchar('0');
	}
}
