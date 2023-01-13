#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes nodes at index
  * @head: head of lsit
  * @index: index of list
  * Return: 1 if success, -1 if fail
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *prev, *next;

	unsigned int i = 0;

	curr = *head;
	while (curr != NULL)
	{
		if (i == index)
		{
			prev = curr->prev;
			next = curr->next;

			if ((prev == NULL) && (next != NULL))
			{
				*head = (*head)->next;
				(*head)->prev = NULL;
				free(curr);
				return (1);
			}
			else if ((prev == NULL) && (next == NULL))
			{
				*head = NULL;
				free(curr);
				return (1);
			}
			else
			{
				prev->next = next;
				next->prev = prev;
			}
			free(curr);
			return (1);
		}
		i++;
		curr = curr->next;
	}
	return (-1);
}
