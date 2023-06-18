#include <stdio.h>
/**
 * main - This is the entry point
 * Return: The output will always be 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int k;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
