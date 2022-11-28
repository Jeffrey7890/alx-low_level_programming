#include "lists.h"
#include "stdlib.h"

/**
  * free_listint2 - frees the linked list and set head to null
  * @head: head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}

