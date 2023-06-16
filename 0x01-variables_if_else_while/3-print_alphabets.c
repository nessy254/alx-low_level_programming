#include <stdio.h>

/**
 * main - start of the program
 * Return: if successful returns zeri
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	};
	for (n = 'A'; n <= 'z'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}


