#include "lists.h"
#include "stdio.h"

/**
  * reverse_listint - reverses a linked list
  * @head: reference to the head of list
  * Return: pointer to head of list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	next = (*head)->next;

	while ((*head)->next != NULL)
	{
		(*head)->next = prev;

		prev = *head;

		*head = next;
		next = next->next;
	}
	(*head)->next = prev;


	return (*head);
}

