#include "lists.h"

/**
  * free_dlistint - free dlist
  * @head: head of list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
