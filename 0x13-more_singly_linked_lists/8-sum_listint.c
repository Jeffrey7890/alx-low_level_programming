#include "lists.h"


/**
 * sum_listint - sums the list of numbers
 * @head: head of the list
 * Return: int sum of elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *trav = head;

	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}

	return (sum);
}
