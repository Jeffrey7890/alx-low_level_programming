#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * free_listint - frees all elements in linked list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

