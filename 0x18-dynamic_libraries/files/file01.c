#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _islower - checks for lowercase character
 *
 * @c: The character for checking the case
 * Description: The function checks for lowercase characters and returns
 * one iflowercase and zero if not
 *
 * Return: 1 if lowercase 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

/**
 * _isalpha - checks for alphabetic order
 *
 * @c: The character to be checked
 *
 * Description: The function checks for an alphabetic character and returns
 *		0 if c is a letter either upper or lower case o, if not
 *
 * Return: 0 if c is letter , lowercase or uppercase and 1 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 122) || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/**
 * _abs - prints the absolute value of an integer
 *
 * @n: integer from which the absolute value is computes
 *
 * Description: The function prints the absolute value of an integer
 *
 * Return: absolute value if executed successfully
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}

/**
 * _isupper - checks for uppercase letters
 *
 * @c: characters to be checked
 *
 * Return: result
 */
int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}

