#include <stdio.h>

#include "main.h"

/**
 * main - start of the program
 * Return: 0 if executed successfully
 */

int main(void)
{
	char s[9] = "_putchar";

int i = 0;

	while (i < 8)
{
		_putchar(s[i]);
		i++;
}
	_putchar('\n');

	return (0);
}

