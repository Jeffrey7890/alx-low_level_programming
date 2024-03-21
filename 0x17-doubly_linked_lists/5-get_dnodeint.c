#include <stdio.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - gets node at index
  * @head: head of dlist
  * @index: index to find
  * Return: pointer to node at index or NULL if failed
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *terve = head;

	unsigned int idx = 0;

	while (terve != NULL)
	{
		if (idx == index)
			return (terve);
		terve = terve->next;
		idx++;
	}
	return (NULL);
}
