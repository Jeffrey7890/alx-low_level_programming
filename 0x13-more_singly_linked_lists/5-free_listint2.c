#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * free_listint2 - frees a linked list
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
