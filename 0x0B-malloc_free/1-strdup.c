#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns duplicate of the input string
 * @str: the string to e copied
 * Return: pointer to the duplicates string, 0 otherwise
 */
char *_strdup(char *str)
{
	size_t size = strlen(str);
	char *duplicate;

	if (str == NULL)
		return (0);
	duplicate = (char *) malloc(size * sizeof(char));
	if (duplicate == NULL)
		return (0);
	strcpy(duplicate, str);
	return (duplicate);
}
