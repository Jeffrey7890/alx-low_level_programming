#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds new node to linked list
 * @head: head of list
 * @str: string of new node
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = NULL;
	new->len = 0;
	if (str != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}
	new->next = *head;

	*head = new;

	return (new);
}

