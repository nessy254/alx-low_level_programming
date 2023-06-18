#include <stdio.h>
/**
 * main - This is the entry point
 * Return: The output will always be 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(int));
	printf("size of long int: %d byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
