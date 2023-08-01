#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		head = current->next;
		free(current);
		current = head;
	}
}
