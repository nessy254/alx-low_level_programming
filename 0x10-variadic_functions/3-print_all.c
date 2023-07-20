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
	int i;
	char *s;

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
			s = va_arg(ap, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			i++;
			continue;
		}
		if (format[i] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}




