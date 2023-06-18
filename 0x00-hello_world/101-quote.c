#include <unistd.h>
/**
 *main - beginning of program executiom
 *Return: 1 indicates program was executed successfully
 **/
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
	return (1);
}
