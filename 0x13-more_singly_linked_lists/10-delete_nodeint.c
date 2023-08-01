#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the node
 * Return: 1 on success, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	temp->next = temp->next->next;
	free(temp);
	return (1);
}
