#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds node to the end of a list
 * @head: head of list
 * @n: number to add
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *trav = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if(*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while(trav->next != NULL)
		trav = trav->next;
	trav->next = new;
	return (new);
}

