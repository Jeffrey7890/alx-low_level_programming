#include "lists.h"
#include "stdio.h"

/**
  * sum_listint - sums the int elements of list
  * @head: head of list
  * Return: the sum of int elemnts in list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

	if (head != NULL)
	{
		temp = head;
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
	}
	return (0);
}

