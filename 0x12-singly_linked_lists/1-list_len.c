#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;
	size_t count = 0;

	for (i = 0; h != NULL; i++)
	{
		count++;
		h = h->next;
	}
	return (count);
}
