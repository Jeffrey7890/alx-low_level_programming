#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * print_listint_safe - prints nodes in the linked list
 * @h: head of list
 * Return: number of element in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *trav, *hare, *loop;

	if (head == NULL)
		exit(98);
	trav = head;
	hare = head->next->next;
	loop = NULL;
	while (hare != loop)
	{
		if (hare == trav)
		{
			loop = hare;
		}
		printf("[%p] %d\n", (void *)trav, trav->n);
		i++;

		trav = trav->next;

	
		if (hare->next != NULL && hare->next->next != NULL)
			hare = hare->next->next;
	}
	printf("[%p] %d\n", (void *)trav, trav->n);
	i++;
	if (trav->next != NULL)
		printf("-> [%p] %d\n", (void *)loop, hare->n);

	return (i);
}



