#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - get an element at an index
 * @head: head of the list
 * @index: position of the element
 * Return: pointer to the element;
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *trav = head;

	while (i != index && trav != NULL)
	{
		trav = trav->next;
		i++;
	}
	if (trav == NULL)
		return (NULL);

	return (trav);
}
