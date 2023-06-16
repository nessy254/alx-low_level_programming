#include <stdio.h>

/**
 * main - start of the funtion
 * Return: zero if executed successfully
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'q' && al != 'e')
		{
			putchar(al);
		}
	}
	putchar('\n');
	return (0);
}
