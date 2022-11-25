#include "lists.h"
#include "stdlib.h"
#include "stdio.h"

/**
  * free_list - frees the list nodes
  * @head: head of the linked list
  */
void free_list(list_t *head)
{
	list_t *traverse = head;

	while (traverse != NULL)
	{
		traverse = head->next;
		free(head->str);
		free(head);
		head = traverse;
	}
}
