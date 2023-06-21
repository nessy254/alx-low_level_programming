#include "main.h"
/**
 * main - start of the program
 * Return: 0 if executed successfully
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
int main(void)
{
    print_alphabet();
    return (0);
}
