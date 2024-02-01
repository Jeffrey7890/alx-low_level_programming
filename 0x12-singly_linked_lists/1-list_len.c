#include "lists.h"
#include <stdlib.h>
#include <stdio.h>



/**
 * list_len - prints all elements in linked list
 * @h: head of a list
 * Return: number of elements in lists
 */
size_t list_len(const list_t *h)
{
	const list_t *trav = h;
	size_t n = 0;

	while (trav != NULL)
	{
		trav = trav->next;
		n++;
	}

	return (n);
}
