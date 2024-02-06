#include "lists.h"
#include <stdlib.h>


/**
 * free_listint - frees a linked list
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
