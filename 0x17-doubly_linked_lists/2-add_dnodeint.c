#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint - adds node to beginning of dlist
  * @head: head of list
  * @n: integer to add
  * Return: pointer to new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}

