#include <stdio.h>

/**
 * main - start of the code
 * Return: o if executed successfully
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
