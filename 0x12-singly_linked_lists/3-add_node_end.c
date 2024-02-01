#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - adds new node to linked list
 * @head: head of list
 * @str: string of new node
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *trav = *head;

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


	if (*head == NULL)
	{

		new->next = *head;
		*head = new;
		return (new);
	}

	while (trav->next != NULL)
		trav = trav->next;

	trav->next = new;
	return (new);
}


