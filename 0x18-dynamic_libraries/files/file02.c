#include "main.h"
/**
 * _isdigit - checks if the character is a digit
 *
 * @c: character to be checked
 *
 * Return: 1, if its a digit, 0, otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

/**
 * _strlen - length of the string
 * @s: the string whose legth is being checked
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	unsigned int str_len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		str_len += sizeof(char);
	return (str_len);
}

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

/**
 * _strcpy - copies the string
 * @dest: points to the bufffer
 * @src: points the string
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *pontr = dest;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (pontr);
}
