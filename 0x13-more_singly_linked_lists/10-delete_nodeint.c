#include "lists.h"
#include "stdlib.h"
#include "stdio.h"

/**
  * delete_nodeint_at_index - deletes a node at index
  * @head: head of node reference
  * @index: index of node
  * Return: 1 if success and -1 if fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev;

	unsigned int i = 0;

	if (i == index && *head != NULL)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		i++;
		if (i == index)
		{
			prev->next = temp->next;

			temp->n = 0;
			free(temp);
			return (1);
		}
	}
	return (-1);
}


