#include <stdio.h>
/**
 * main - start of the program
 * Return: zero if successfully executes..in this case
 */
int main(void)
{
	int a;

	for (a = 0; a < 16; a++)
	{
		if (a < 10)
		{
			putchar(a + '0');
		}
		else
		{
			putchar(a - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
