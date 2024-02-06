#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at an index
 * @head: head of list
 * @idx: index to insert node
 * @n: element to insert
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav, *tmp, *node;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head == NULL || idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	trav = *head;

	while (i != idx && trav != NULL)
	{
		tmp = trav;
		trav = trav->next;
		i++;
	}
	if (trav == NULL)
		return (NULL);

	tmp->next = node;
	node->next = trav;

	return (node);
}

