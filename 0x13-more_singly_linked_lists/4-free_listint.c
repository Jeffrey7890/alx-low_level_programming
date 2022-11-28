#include "lists.h"
#include "stdlib.h"

/**
  * free_listint - frees the linked list
  * @head: head of list
  */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

