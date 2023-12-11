#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: the string
 * Return: result * sign
 */
int _atoi(char *s)
{
	int i;
	int m = 0;
	int n = 1;

for (i = 0; s[i] != '0'; i++)
{
	if (s[i] == '-')
		n *= -1;
	if (s[i] >= 47 && *(s + i) <= 57)
	{
		if (m < 0)
			m = (m * 10) - (s[i] - '0');
		else
			m = (s[i] - '0') * -1;
		if (s[i + 1] <= 47 || s[i] >= 57)
			break;
	}
}
	return (m * n);
}


/**
 * _strcat - it concatenates two strings
 * @dest: string which we append to
 * @src: the string to add
 *
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * _strncat - concatenates two strings
 * @dest: dest of the string we append to
 * @src: string to add(source)
 * @n: str bytes to append
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[a] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}


/**
 * _strncpy - copies a string
 * @dest: dest string to be copied
 * @src: source of the string
 * @n: bytes of the str
 * Return:returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}


/**
 * _strcmp - compares a str
 * @s1: first string
 * @s2: second string
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
