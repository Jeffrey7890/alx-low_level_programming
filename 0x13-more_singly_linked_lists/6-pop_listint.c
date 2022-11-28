#include "lists.h"
#include "stdlib.h"

/**
  * pop_listint - deletes the head node of a list
  * @head: head of list
  * Return: value
  */
int pop_listint(listint_t **head)
{
	int n = (*head)->n;

	listint_t *temp = (*head)->next;

	free(*head);

	*head = temp;

	return (n);
}

