#include "lists.h"
#include <stdio.h>

/**
  * print_dlistint - prints data stored in dlist
  * @h: head of list
  * Return: length of list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}

