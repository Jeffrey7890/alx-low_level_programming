#include <stddef.h>
#include <stdio.h>
#include "lists.h"


/**
 * listint_len- gets num of elements in the linked list
 * @h: head of list
 * Return: number of element in list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *trav;


	if (h == NULL)
		return (i);
	trav = h;

	while (trav != NULL)
	{
		i++;
		trav = trav->next;
	}

	return (i);
}



