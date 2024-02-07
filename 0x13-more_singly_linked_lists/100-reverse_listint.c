#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 * Return: pointer to tail list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *center, *back;

	if (*head == NULL)
		return NULL;

	back = NULL;
	center = *head;
	front = (*head)->next;

	while (center != NULL)
	{
		center->next = back;
		back = center;
		center = front;
		if (front != NULL)
			front = front->next;
	}
	*head = back;
	return (*head);
}
