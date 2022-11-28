#include "lists.h"
#include <stddef.h>
#include "stdio.h"


/**
  * listint_len - prints length of a linked list
  * @h: head of list
  * Return: length
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *t = h;

	size_t i = 0;

	while (t != NULL)
	{
		i++;
		t = t->next;
	}
	return (i);
}
