#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of the list
 * @head: head of the list
 * @str: string to be added
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
