#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the head of the linked list
 * @index: index of the node
 * Return: 1 on success, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	else if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;

	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);

	return (1);
}
