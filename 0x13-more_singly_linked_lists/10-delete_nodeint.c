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
	listint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	if (temp->next == NULL)
	{
		free(temp->next);
		temp->next = NULL;
		return (1);
	}
	temp->next = temp->next->next;
	free(temp->next);
	temp->next = NULL;
	return (1);
}
