#include "main.h"
/**
 * _puts - prints the string
 * @str: str to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
	_putchar(10);
}
