#include <stdio.h>

/**
 * main - the start of the program
 * Return: 0 if executed successfully
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}

