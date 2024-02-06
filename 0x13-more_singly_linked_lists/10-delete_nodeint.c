#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index :|
 * @head: head of the node :o
 * @index: position of node to delete :]
 * Return: 1 if success -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav, *tmp;
	unsigned int i = 0;


	if (*head == NULL)
		return (-1);

	if (*head != NULL && index == 0)
	{
		trav = (*head)->next;
		free(*head);
		*head = trav;
		return (1);
	}

	trav = (*head);
	while (i != index && trav != NULL)
	{
		tmp = trav;
		trav = trav->next;
		i++;
	}
	if (trav == NULL)
		return (-1);

	tmp->next = trav->next;
	free(trav);
	return (1);
}

