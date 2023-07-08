#include <stdio.h>
#include "main.h"
/**
 * main - prints all the argument it receives
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0, if executed successfully
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	return (0);
}
