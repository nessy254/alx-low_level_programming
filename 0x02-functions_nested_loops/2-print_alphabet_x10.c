 #include "main.h"
/*
 * print_alphabet_x10 - prints alphabets 10 times
 * Return: void if executed successfully
 */
void print_alphabet_x10(void)
{
	char alphabets;
	int i = 0;

	while (i < 10)
	{
		alphabets = 'a';
		while (alphabets <= 'z')
		{
			_putchar(alphabets);
			alphabets++;
		}
		_putchar('\n');
		i++;
	}
}
