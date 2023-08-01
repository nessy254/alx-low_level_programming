#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t *next;
	int i;

	head = NULL;
	for (i = 0; i < 10; i++)
	{
		next = malloc(sizeof(listint_t));
		if (next == NULL)
		{
			free(head);
			return (1);
		}
		next->n = i;
		next->next = NULL;
		if (head == NULL)
			head = next;
		else
		{
			new = head;
			while (new->next != NULL)
				new = new->next;
			new->next = next;
		}
	}
	print_listint(head);
	free_listint(head);
	return (0);
}
