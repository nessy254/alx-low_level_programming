#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		printf("%s", str);
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");

	va_start(list, n);
}

