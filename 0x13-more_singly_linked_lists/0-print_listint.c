#include <stddef.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_listint - prints nodes in the linked list
 * @h: head of list
 * Return: number of element in list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *trav;


	if (h == NULL)
		return (i);
	trav = h;

	while (trav != NULL)
	{
		printf("%d\n", trav->n);
		i++;
		trav = trav->next;
	}

	return (i);
}



