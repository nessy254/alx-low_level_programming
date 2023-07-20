#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function according to the operator
 * @s: operator
 *
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)

	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
