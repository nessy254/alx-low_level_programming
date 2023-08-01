#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: the head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
