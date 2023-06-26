#include "main.h"
/**
 * puts2 - prints every character of the string
 * @str: string in whic every character will be printed from
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
