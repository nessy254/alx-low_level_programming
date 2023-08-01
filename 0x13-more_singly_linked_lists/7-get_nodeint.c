#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: head of list
 * @index: index of node, starting at 0
 * Return: nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
