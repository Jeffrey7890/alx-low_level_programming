#include "lists.h"
#include <stdio.h>

/**
  * dlistint_len - prints data stored in dlist
  * @h: head of list
  * Return: length of list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

