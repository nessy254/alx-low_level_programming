#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: pointer to the head of the list
 * Return: number of nodes, 0 if h is null
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *temp;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		temp = h->next;
		h = temp;
	}
	return (i);
}

