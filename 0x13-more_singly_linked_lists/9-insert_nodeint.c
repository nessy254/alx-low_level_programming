#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	aux = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}
	new->next = aux->next;
	aux->next = new;
	return (new);
}
