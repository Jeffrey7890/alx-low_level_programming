#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 * Return: pointer to tail list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *back;

	if (*head == NULL)
		return NULL;

	back = NULL;
	front = (*head)->next;

	while ((*head) != NULL)
	{
		(*head)->next = back;
		back = (*head);
		(*head) = front;
		if (front != NULL)
			front = front->next;
	}
	*head = back;
	return (*head);
}
