#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the opcodes
 * @num_bytes: number of bytes
 */

void print_opcodes(int num_bytes)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;
	int i;

	if (num_bytes > 0)
	{
		for (i = 0; i < num_bytes - 1; i++)
		{
			printf("%02x ", ptr[i]);
		}
	printf("%02x\n", ptr[i]);
	}
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if no of args is incorrect, 2
 * f bytes no is negative
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

