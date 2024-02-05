#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint - add new element to the list
 * @head: head of the list
 * @n: new number
 * Return: pointer to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);	

}
