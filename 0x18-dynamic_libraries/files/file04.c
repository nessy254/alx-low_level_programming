#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: the base adress
 * @b: the constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}


/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}


#include <stddef.h>
/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character whose pointer to 1st occurrence is returned
 * Return: pointer to first occurence if char found, Null , otherwise
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return ('\0');
}


/**
 * _strspn - gets the length of a prefix substring
 * @s: initialsegment
 * @accept: contains only a no of bytes from initial segment
 * Return: initial segment of s no of bytes only of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int incr = 0;
	char *p;

	for (; *s != '\0'; s++)
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*p == *s)
			{
				break;
			}
		}
		if (!*p)
			break;
		incr++;
	}
	return (incr);
}


/**
 * _strpbrk - searches a string for any set of bytes
 * @s: String we'll search
 * @accept: string which one of bytes is to be matched
 * Return: pointer that matches one of the bytes or Null
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
