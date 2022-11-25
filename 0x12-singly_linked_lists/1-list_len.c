#include "lists.h"

/**
  * list_len - gets the length of a linked list
  * @h: list structure
  * Return: length of list
  */
size_t list_len(const list_t *h)
{
	const list_t *traverse = h;

	size_t size = 0;

	while (traverse != NULL)
	{
		size++;
		traverse = traverse->next;
	}

	return (size);
}

