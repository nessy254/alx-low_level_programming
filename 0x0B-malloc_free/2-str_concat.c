#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result if success, null on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t size_s1 = strlen(s1);
	size_t size_s2 = strlen(s2);
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	result = (char *) malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (0);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
