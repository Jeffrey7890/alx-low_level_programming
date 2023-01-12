#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint_end - add node to end of dlist
  * @head: head of list
  * @n: integer stored in dlist
  * Return: pointer to new node added
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = *head;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	new_node->n = n;
	tmp->next = new_node;
	new_node->prev = tmp;
	new_node->next = NULL;

	return (new_node);
}

