#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *str;

	va_start(ap, format);
	i = 0;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				for (j = 0; str[j] != '\0'; j++)
					printf("%c", str[j]);
				printf("\n");
				break;
			default:
				break;
		}
		i++;
	}
	va_end(ap);
}



