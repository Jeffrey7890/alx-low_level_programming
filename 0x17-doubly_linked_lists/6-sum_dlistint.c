#include "lists.h"

/**
  * sum_dlistint - sums integer data in list
  * @head: head of the dlist
  * Return: sum of list
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
