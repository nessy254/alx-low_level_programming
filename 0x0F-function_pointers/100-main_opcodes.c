#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the opcodes
 * @num_bytes: number of bytes
 * Return: void
 */

void print_opcodes(int num_bytes)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		if (ptr[i] == 0)
			break;

		printf("%02x ", ptr[i]);
	}
	printf("\n");
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}

