#include <stdlib.h>
#include <time.h>
/* more headers gooes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -  us the entry point for program (initializing)
 *
 *Return: zero , program has been terminated successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
