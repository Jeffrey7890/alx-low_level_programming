#include "lists.h"
#include <stdlib.h>
#include <stdio.h>



/**
 * print_list - prints all elements in linked list
 * @h: head of a list
 * Return: number of elements in lists
 */
size_t print_list(const list_t *h)
{
	const list_t *trav = h;
	size_t n = 0;

	while (trav != NULL)
	{
		if (trav->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", trav->len, trav->str);
		trav = trav->next;
		n++;
	}

	return (n);
}
