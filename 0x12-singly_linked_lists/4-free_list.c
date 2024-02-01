#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * free_list - frees all elements in linked list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

