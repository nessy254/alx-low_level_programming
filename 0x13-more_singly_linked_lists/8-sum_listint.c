#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n) of list
 * @head: head of the linked list
 * Return: the sum, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
