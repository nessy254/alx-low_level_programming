#include <stdio.h>
/**
 * main - start of the program
 * Return: zero if successfully executed
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			if (num1 > num2)
			{
				continue;
			}
			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
