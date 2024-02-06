#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - remove an element from list
 * @head: head of the list
 * Return: value of the n
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;

	n = tmp->n;
	free(tmp);
	return (n);
}
