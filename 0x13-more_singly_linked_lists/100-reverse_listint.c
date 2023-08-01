#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the ead of list
 * Return: pointer to the first node or rev list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *before = NULL;

	while (temp != NULL)
	{
		listint_t *next = temp->next;

		temp->next = before;
		before = temp;
		temp = next;
	}
	*head = before;
	return (*head);
}
